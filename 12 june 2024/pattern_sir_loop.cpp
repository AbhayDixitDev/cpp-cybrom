//WAP to display a pattern 
//1.
//*
//**
//***
//****
//*****
//2.
//*****
//****
//***
//**
//*
//ractangle pattern
//#include<iostream>
//using namespace std;
//int main()
//{
//	for(int i=1;i<=5;i++){
//		for(int i=1;i<=8;j++){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}
//
//}




//1.
//#include<iostream>
//using namespace std;
//int main()
//{
//	for(int i=1;i<=5;i++){
//		for(int j=1;j<=i;j++){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}
//
//}



//2.
//#include<iostream>
//using namespace std;
//int main()
//{
//	for(int i=5;i>=1;i--){
//		for(int j=1;j<=i;j++){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}
//
//}

//3. hollow rectangle
//* * * * * * * *
//*             *
//*             *
//*             *
//* * * * * * * *
#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=5;i++){
		for(int j=1;j<=8;j++){
			if(i==1 || i==5  | j==1 | j==8){
				cout<<"* ";
				
			}
			else
			cout<<"  ";
	}
	cout<<endl;
	}

}


