// Write a recursive function to calculate the sum of the first n natural numbers.

#include<iostream>
using namespace std;
void addn(int range,int n)
{
    int sum;
    if(n>range){
        return;
    }
    addn(range,n+1);
    sum=sum+n;
    cout<<sum;
}
int main(){
    int range=10,n=1;
     addn(range,n);
}