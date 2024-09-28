//Q.7) Write a C++ function that counts the number of occurrences of a specific character in a string.
  
  
  #include <iostream>
  using namespace std;
  
   int countOccurrences(string str, char ch) {
   	int count=0;
   	for(int i=0;i<str.length();i++){
   		if(str[i]==ch){
   			count++;
		   }
	   }
   	return count;
   }
   
   int main(){
   	string str;
   	char ch;
   	cout<<"Enter a String:";
   	getline(cin,str);
   	cout<<"Which characters occurence you want to know , Enter:";
   	cin>>ch;
   	
   	cout<<"Character occur "<<countOccurrences(str,ch)<< " times in string";
   }

