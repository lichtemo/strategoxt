(*
 GT -- Grammar Tools
 Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
                    Eelco Visser <visser@acm.org>
                    Joost Visser <jvisser@cwi.nl>

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2, or (at your option)
 any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 02111-1307, USA.

 $Id: Dot.r,v 1.5 2002/09/26 14:26:30 mdejonge Exp $
*)

module Dot
  signature
    constructors
      dot-graph : Boolean * Boolean * Id * Stmt-List -> Graph
      alias : Id * Id -> Stmt
      attr-id : Id * Id -> Attr
      attr-num-con : Id * Num-Con -> Attr
      node-stmt : Node-Id * Option(Attrs) -> Node-Stmt
      edge-stmt : Either(Node-Id,SubGraph) * EdgeOp * ListSep(Either(Node-Id,SubGraph),EdgeOp) * Option(Attrs) -> Edge-Stmt
      sub-graph : Id * Option(Stmt-List) -> SubGraph
      arrow : EdgeOp
      line : EdgeOp
      Attr-List : Attr-List  -> Attrs
      Attr-Stmt : Attr       -> Attr
      node: Attr-List -> Attr-Stmt
      comma: ListSep(Attr) -> Attr-List
      semicolon: ListSep(Stmtm) -> Stmt-List
      alt: X * Y -> Option
