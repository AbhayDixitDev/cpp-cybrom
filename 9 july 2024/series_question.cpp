#include<iostream>
using namespace std;
int main()
{
	char ch='A',last=ch+2;;

	for(int i=1;i<=9;i++){		
		for(ch;ch<=last;ch++){
			cout<<ch;
			if(ch>='Z')
			break;
		}
		ch=last;
		last=ch+3;		
		ch++;		
		if(i<9){
				cout<<" $ ";
		}
		else{
			cout<< "";
		}
	}

}

