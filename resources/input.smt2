(declare-fun symvar1654230038 () Int)
(declare-fun symvar1112410015 () Int)
(assert ( and ( and ( and true ( < symvar1112410015 8)) ( not ( > symvar1112410015 symvar1654230038))) ( < ( - symvar1112410015 10) ( - symvar1654230038 10))))
(check-sat)
(get-model)
(exit)