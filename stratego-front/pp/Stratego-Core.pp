[
   Module                     -- KW["module"] _1 _2,
   Module.2:iter-star         -- _1,
   Specification              -- V  [H  [KW["specification"]] _1],
   Specification.1:iter-star  -- _1,
   Imports                    -- V  [H  [KW["imports"]] _1],
   Imports.1:iter-star        -- _1,
   Strategies                 -- V  [H  [KW["strategies"]] _1],
   Strategies.1:iter-star     -- _1,
   Signature                  -- V  [H  [KW["signature"]] _1],
   Signature.1:iter-star      -- _1,
   SVar                       -- _1,
   Let                        -- KW["let"] _1 KW["in"] _2 KW["end"],
   Let.1:iter-star            -- _1,
   CallT                      -- _1 KW["("] _2 KW["|"] _3 KW[")"],
   CallT.2:iter-star-sep      -- _1 KW[","],
   CallT.3:iter-star-sep      -- _1 KW[","],
   SDefT                      -- _1 KW["("] _2 KW["|"] _3 KW[")"] KW["="] _4,
   SDefT.2:iter-star-sep      -- _1 KW[","],
   SDefT.3:iter-star-sep      -- _1 KW[","],
   ExtSDefInl                 -- KW["external"] _1 KW["("] _2 KW["|"] _3 KW[")"] KW["="] _4,
   ExtSDefInl.2:iter-star-sep -- _1 KW[","],
   ExtSDefInl.3:iter-star-sep -- _1 KW[","],
   ExtSDef                    -- KW["external"] _1 KW["("] _2 KW["|"] _3 KW[")"],
   ExtSDef.2:iter-star-sep    -- _1 KW[","],
   ExtSDef.3:iter-star-sep    -- _1 KW[","],
   VarDec                     -- _1 KW[":"] _2,
   ParenStrat                 -- KW["("] _1 KW[")"],
   Fail                       -- KW["fail"],
   Id                         -- KW["id"],
   Match                      -- KW["?"] _1,
   Build                      -- KW["!"] _1,
   Scope                      -- KW["{"] _1 KW[":"] _2 KW["}"],
   Scope.1:iter-star-sep      -- _1 KW[","],
   Seq                        -- _1 KW[";"] _2,
   LGChoice                   -- _1 KW["<++"] _2,
   GuardedLChoice             -- _1 KW["<"] _2 KW["+"] _3,
   Bagof                      -- KW["bagof"] KW["("] _1 KW[")"],
   PrimT                      -- KW["prim"] KW["("] _1 KW[","] _2 KW["|"] _3 KW[")"],
   PrimT.2:iter-star-sep      -- _1 KW[","],
   PrimT.3:iter-star-sep      -- _1 KW[","],
   Path                       -- _1 _2,
   Some                       -- KW["some"] KW["("] _1 KW[")"],
   One                        -- KW["one"] KW["("] _1 KW[")"],
   All                        -- KW["all"] KW["("] _1 KW[")"],
   Thread                     -- KW["thread"] KW["("] _1 KW[")"],
   Var                        -- _1,
   SeqVar                     -- KW[":"] _1,
   Wld                        -- KW["_"],
   As                         -- _1 KW["@"] _2,
   Int                        -- _1,
   Real                       -- _1,
   Str                        -- _1,
   Op                         -- _1 KW["("] _2 KW[")"],
   Op.2:iter-star-sep         -- _1 KW[","],
   OpQ                        -- _1 KW["("] _2 KW[")"],
   OpQ.2:iter-star-sep        -- _1 KW[","],
   Explode                    -- _1 KW["#"] KW["("] _2 KW[")"],
   Anno                       -- _1 KW["{^"] _2 KW["}"],
   Sorts                      -- V  [H  [KW["sorts"]] _1],
   Sorts.1:iter-star          -- _1,
   Constructors               -- V  [H  [KW["constructors"]] _1],
   Constructors.1:iter-star   -- _1,
   SortVar                    -- _1,
   SortNoArgs                 -- _1,
   Sort                       -- _1 KW["("] _2 KW[")"],
   Sort.2:iter-star-sep       -- _1 KW[","],
   OpDecl                     -- _1 KW[":"] _2,
   OpDeclQ                    -- _1 KW[":"] _2,
   OpDeclInj                  -- KW[":"] _1,
   ConstType                  -- _1,
   FunType                    -- _1 KW["->"] _2,
   FunType.1:iter-sep         -- _1 KW["*"]
]
