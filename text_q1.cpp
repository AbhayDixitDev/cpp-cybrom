#include <iostream>
using namespace std;

class Customer{
   protected:
   int bill;
   public:
   Customer(int bills){
    bill = bills;
   } 
   virtual void applyDiscount(){
    cout<<"Payable Amounts:"<<bill;
   }
};

class RegularCustomer:virtual public Customer{
   public:
   RegularCustomer(int bills):Customer(bills){}
   virtual void applyDiscount(){
    cout<<"Discount Applied: "<<bill-(bill*0.05)<<endl;
   }
   
};
class PremiumCustomer:virtual public Customer{
   public:
   PremiumCustomer(int bills):Customer(bills){}
   virtual void applyDiscount(){
    cout<<"Discount Applied: "<<bill-(bill*0.1)<<endl;
   }
   
};

int main(){
    Customer obj(2500);
    obj.applyDiscount();
    RegularCustomer obj1(2500);
    obj1.applyDiscount();    
    PremiumCustomer obj2(2500);
    obj2.applyDiscount();
}