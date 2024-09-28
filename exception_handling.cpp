//Exception handling

runtime error: in programming , exception is nothing but a runtime error
possible errors:
	
	1) zero division error
	
	int a=23,b=0;
	cout<<a/b;   //zero division error
	
	2) dangling poiter help value access (dynamic memory)
	3) memory allocation fail
	4) stack overflow
	5)infinite loop
	6)fragmentation fault (arr[10]---->arr[1000])
	
	
c++ handles runtime error(exceptional handling)

try-throw-catch  block
try--> code test(normal code)
if possible runtime error may occur  then throw with the help of throw keyword.


catch--> special function block handling code ..

Note: try must be written with atleast one catch, multiple catch may possible.
