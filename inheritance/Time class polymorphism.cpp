//WAP to create a class name time in which we have two data members hour and minute and having the following methods
//1. Convert_into_minute() --> like 2 h 30 m = 150minute
//2. Add_two_time_objects() --> obj1(2,30), obj2(2,40) ---- 5 hour 10 min

#include <iostream>
using namespace std;

class Time{
	private:
		int hour;
		int minute;
	public:
		Time(int hour,int minute){
			this->hour=hour;
			this->minute=minute;
		}
		int Covert_into_minute(){
			int time=hour*60+minute;
			return time;
		}
		
//		Time operator +(Time obj){   //method1
//			Time temp(0,0);
//			
//			temp.minute=minute+obj.minute;
//		    
//			if(temp.minute>59){
//				
//				hour=hour+1;
//				
//				temp.minute=temp.minute-60;
//			}
//			temp.hour=hour+obj.hour;			
//			
//			return temp;
//		}
		
		Time operator +(Time obj1){   //method 2
			Time temp(0,0);
			
			int extra_hour=(minute+obj1.minute)/60;
			int remain_minute=(minute+obj1.minute)%60;
			temp.hour=hour+obj1.hour+extra_hour;
			temp.minute=remain_minute;
			return temp;
		}
		
		
		
		void display(){
			 cout<<"Hour:"<< hour<<" Minute:"<< minute;
		}
};

int main()
{
	Time obj1(2,30),obj2(2,60),obj3(2,40);
	cout<<obj1.Covert_into_minute()<<endl;
	Time result=obj1+obj2+obj3;
	result.display();
}
