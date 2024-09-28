String
collection of character

character set { a-z} { A-Z} {0-9} {special symbols and white spaces}

string="" // empty string


Classfication of String
char A[]={'w','e'}  // "we" // array of characters //    C-style = C-string
string B="abcd";  // template , class (Data-type) string 
'/0' null character for string array termination


 C-style = C-string                       |   template , class (Data-type) string
                                          |
  Array of characters                     |                                                   
  ->fixed size                            |    ->dynamic size
  ->static creations                      |    ->dynamic creation                                               
                                          |                                                   
   represent : char A[3]={'a','b','c'}    |   represent : string str1="abhay";                                              
    char B[2]={'w','e','r'}  error        |                                                
    char B[2]="we" error                  |                                                
we have to add extra size for null value  |                                                   
     char B[3]="we"                       |
										  |                                                   
                                          |                                                   
                                          |                                                  
                                          |                                                    
                                          |                                                   
                                          |                                                   
                                          |                                                   
