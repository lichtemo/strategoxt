\literate[free-variables]

	\begin{abstract}

	Extraction of free variables from an expression is governed
	by the shape of variables and the shape of variable bindings.

	\end{abstract}

% Copyright (C) 1998-2001 Eelco Visser <visser@acm.org>
% 
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
% 
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.

\begin{code}
module free-variables
imports list
\end{code}

	\paragraph{Parameters of Free Variable Extraction}

	the following aspects determine the extraction of
	free variables from expressions

	\begin{itemize}

	\item shape of variables

	\item variables bound by a binding construct

	\item arguments of the binding constructs where variables are
	bound

	\end{itemize}

	In addition can variable constructs contain other variables, 
	or in other words, whether variables are leaves or non-leaves.

	\paragraph{Variables are Leaves}

	In the first style of free variable extraction, variables are
	leaves of abstract syntax trees.

	Free variables of a term; The first argument s1 is a strategy
	that transforms variables into lists of variables, e.g.,
	\verb|Var(x) -> [x]|; The second argument s2 is a strategy
	that maps binding constructs to the list of bound variables,
	e.g., \verb|Scope(xs, s) -> xs|;

\begin{code}
strategies

  free-vars(getvars, boundvars) = 
    rec x(getvars 
          <+ split(crush(![],union,x), boundvars <+ ![]); diff)

  free-vars(getvars, boundvars
           , boundin : term * (term -> term) * (term -> term) * (term -> term) -> term) = 
    rec x(getvars 
          <+ {vs: where(boundvars => vs); 
                  boundin(split(x, !vs); diff, x, ![])};
             crush(![],union,id)
          <+ crush(![],union,x))

(* // if we had strategy abstraction /\(x1,...,xn) -> s

  free-vars(getvars, boundvars, boundin) = 
    collect(getvars
           ,/\ (x,nil) -> 
            {vs: where(boundvars => vs); 
                 boundin(split(x, !vs); diff, x, nil)})
*)

  free-vars(getvars, boundvars
           , boundin : term * (term -> term) * (term -> term) * (term -> term) -> term
           , eq) 
  = rec x(getvars 
          <+ {vs: where(boundvars => vs); 
                  boundin(split(x, !vs); diff(eq), x, ![])};
             crush(![],union,id)
          <+ crush(![],union,x))
\end{code}

	\paragraph{Variables are not Leafs}

	In a more complicated style of free variable extraction,
	variables are not leaves of abstract syntax trees, but can
	contain subterms that again contain variables.

\begin{code}
strategies

  free-vars2(getvars, boundvars) = 
    rec x(split(getvars <+ ![],
	        split(crush(![],union,x), boundvars <+ ![]); diff); 
          union)

  free-vars2(getvars, boundvars
            , boundin : term * (term -> term) * (term -> term) * (term -> term) -> term) = 
    rec x(split(getvars <+ ![],
                ({vs: where(boundvars => vs); 
                      boundin(split(x, !vs); diff, x, ![])};
                 crush(![],union,id)
                 <+ crush(![],union,x)));
          union)

  free-vars2(getvars, boundvars
            , boundin : term * (term -> term) * (term -> term) * (term -> term) -> term
            , eq)
  = rec x(split(getvars <+ ![]
               ,{vs: where(boundvars => vs);
                     boundin(split(x, !vs); diff(eq), x, ![]);
                     crush(![],union,id)}
                <+ crush(![],union,x)
               ); union)
\end{code}
