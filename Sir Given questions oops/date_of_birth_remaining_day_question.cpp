//4.Create a C++ class Date which contains:
//private member:
//   - Day
//   - Month
//   - Year
//public:
//  set_today_date()
//  display_date()
//  Birth_day_reminder()--> user enter a DOB, function calculate after how many days yours birthday will come,
//                          if user give false input(eg: past birthdate) error message will occur.

#include <iostream>
#include <ctime>
using namespace std;

class Date{
	private:
		int day,month,year;
		
	public:
		static int todayday;
		static int todaymonth;
		static int todayyear;
		
		Date(int d,int m,int y){
			day=d;
			month=m;
			year=y;
		}
		
		void display(){
			cout<<"My dob is "<<day<<"/"<<month<<"/"<<year<<endl;
		}
		
		void remaining_day(){
			int monthdays[]={31,28,31,30,31,30,31,31,30,31,30,31};
			int remaining_days=0;
			if(month<todaymonth){
				remaining_days=(monthdays[todaymonth-1]-todayday)+1;
				for(int i=todaymonth;i<12;i++) remaining_days+=monthdays[i];
				for(int i=0;i<month-1;i++) remaining_days+=monthdays[i];
				remaining_days+=day;
			}
			else if(month>todaymonth){
				remaining_days=(monthdays[todaymonth-1]-todayday)+1;
				for(int i=todaymonth;i<month-1;i++) remaining_days+=monthdays[i];
				remaining_days+=day;
			}
			else if(month==todaymonth){
				if(day>todayday) remaining_days=day-todayday;
				else if(day<todayday){
					remaining_days=(monthdays[todaymonth-1]-todayday);
					for(int i=todaymonth;i<12;i++) remaining_days+=monthdays[i];
					for(int i=0;i<month-1;i++) remaining_days+=monthdays[i];
					remaining_days+=day;
				}
				else cout<<"Happy Birthday!, Today is your Birthday!"<<endl;
			}
			cout<<"remaining days:"<<remaining_days;
		}
		
		static void display_today_date(){
			cout<<"Today's date is "<<todayday<<"/"<<todaymonth<<"/"<<todayyear<<endl;
		}
};

int get_today_day() {
    time_t t = time(0);
    tm* now = localtime(&t);
    return now->tm_mday;
}

int get_today_month() {
    time_t t = time(0);
    tm* now = localtime(&t);
    return now->tm_mon + 1;
}

int get_today_year() {
    time_t t = time(0);
    tm* now = localtime(&t);
    return now->tm_year + 1900;
}

int Date::todayday = get_today_day();
int Date::todaymonth = get_today_month();
int Date::todayyear = get_today_year();

int main(){
	Date::display_today_date();
	
	int day,month,year;
	cout<<"Enter you date of birth seperate with space:";
	cin>>day>>month>>year;
	Date obj(day,month,year);
	obj.display();
	obj.remaining_day();
}
