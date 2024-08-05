Syntax of inheritance:
	
	class Parent{
		public:
			protected:
				private:
	};
	
	class Child : visibility_mode(public, private, protected) Parent{
		
	};
	//visibility_mode--> public, private, protected
	
	
	parent               mode               child
	===========================================
	
	private                              
	public               public             public
	protected            public             protected
	
	
	private                              
	public               protected          protected
	protected            protected          protected
	
	
	private                              
	public               private            private
	protected            private            private
