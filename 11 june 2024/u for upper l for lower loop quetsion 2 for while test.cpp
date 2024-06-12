//WAP to display result according to following condition:
//1)take an input(only one input) of type char named choice from the user.
//
//2)if user enter 'U' display all upper letters
//i,e
//A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 
//
//3)else if, user enter 'L' display all lower letters
//a b c d e f g h i j k l m n o p q r s t u v w x y z
//
//4)other then this
//display message "no match"

#include<iostream>
using namespace std;
int main()
{
	char choice;
	cout<<"Enter 'U' for upper case letters or 'L' for lower case letters:";
	cin>>choice;
	char printchar;
    
    if(choice=='U'){
    	printchar = 'A';
    	while(printchar<='Z'){
    		cout<<printchar<<endl;
    		printchar++;
		}
	}
	else if(choice=='L'){
    	printchar = 'a';
    	while(printchar<='z'){
    		cout<<printchar<<endl;
    		printchar++;
		}
	}
	else{
		cout<<"No Match";
	}
}

