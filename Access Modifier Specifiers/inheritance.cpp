Inheritance:
	To inherit the property of parent class we use the concept of inheritance.
	Inheritance are of Unidirectional flow child can access parent property but parent cant access child property.
	
Terminology:  
	Parent -- Child
	Super -- Sub  (In Python/Java)
	Base-- Derived
	
Type of inheritance:
	1.Single Level:    
	
		                                 
		========
        =Parent=
        ========
           =
		   =
		   V        
        ========
        =Child =
        ========
        
    2. Multi Level
    
        ========
        =Parent=
        ========
           =
		   =
		   V        
        ========
        =Child =
        ========
           =
		   =
		   V        
        ==============
        =Grand Child =
        ==============
           =
		   =
		   V        
        ====================
        =Great Grand Child =
        ====================
    3. Multiple
    
       ===========                       =============                 ============
       = P1 ======                       ==== p2 =====                 ==p3========
       ===========                       =============                 ============
                  =                           =                         =
                    =                         =                       =
                      =                       =                    =
                         =                    =                  =
                            =                =                 =
                                    =         =       =
                                        =    =     =
                                            = = =
                                             =
                                              V        
                                          ========
                                          =Child =
                                          ========
      
	  
	  4. hierarchical (tree)
	  
	                                        ========
                                            =Parent=
                                            ========
                                              =
                            =======          ======           ======
                            ==c1===          ==c2==           ==c3==
                            =======          ======           ======
                              =
                        ====    ====
						=c4=    =c5= 
						====    ====  
						
	  5.Hybrid 
	                                        ========
                                            =Parent=
                                            ========
                                          =    =     =
										=      =        =
								    =          =            =                 
                            =======          ======           ======
                            ==c1===          ==c2==           ==c3==
                            =======          ======           ======
	                               =         =
								     =    =
									    =
									=========
                                    =G Child=
                                    =========          
	  
	                                         
                         
        
        
