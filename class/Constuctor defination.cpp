Constructor :
If we are not defining any constructor explicitly then the compiler itself create a constructor known as default constructor. 
It is healthy practice to define anyone of three constructor in our class.

Example:
If class is System and data members are name,category,hard_disk,and ram then constructor will be:
	
	System(){   // default constructor
		name="";
		category="";
		hard_disk=0;
		ram=0;
	}
	
===============================================================================================================================
1> It is special member function(), which is create to construct the memory for all data members in class,
2> Also help to initialized data member of a class.
3> Name of the constructor  must be same as class name.
4> Calling of constructor must be done implicitly, automatic calling. (whenever object is created at the same time , 
   to construct memory for that object - data member, constructor is called at the same time.)
5> Constructor not return any value, and we dont mention it in our code.
6> It should be placed/defined at public access specifier.
7> Constructor can be overlaoded.
8> It is classfied as 
   1.default(Created by compiler itself if we cant define it)
   2.parameterized
   3.copy constructor (Created by compiler itself if we cant define it)
   
================================================================================================================================
