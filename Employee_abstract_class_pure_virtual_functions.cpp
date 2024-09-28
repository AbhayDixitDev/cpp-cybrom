//Q.1>
//Write a C++ program to create an abstract class Employee with a pure virtual function calculateSalary(). Derive two classes FullTimeEmployee and 
//PartTimeEmployee from Employee and implement the calculateSalary() function in each derived class with the help of base pointer.
//More description
//Full time employee get fixed salary on monthly basis.
//Data member : monthly_salary
//Member function:constructor, calculateSalary().,Display()
//
//Part time employee get salary on daily wage  basis.
//Data member : dailyRate,days_worked;
//Member function: constructor ,calculateSalary().,Display()
//
//Ex:
//If  a person had worked 9 days in a month and dailyrate=2000
//Total_salary=2000*9=18000.



#include <iostream>
using namespace std;

// Abstract base class Employee
class Employee {
public:
    virtual double calculateSalary() = 0; // pure virtual function
    virtual void display() = 0; // pure virtual function
};

// Derived class FullTimeEmployee
class FullTimeEmployee : public Employee {
private:
    double monthlySalary;
public:
    FullTimeEmployee(double salary) : monthlySalary(salary) {}

    double calculateSalary() {
        return monthlySalary;
    }

    void display() {
        cout << "Full Time Employee: Monthly Salary = " << monthlySalary << endl;
    }
};

// Derived class PartTimeEmployee
class PartTimeEmployee : public Employee {
private:
    double dailyRate;
    int daysWorked;
public:
    PartTimeEmployee(double rate, int days) : dailyRate(rate), daysWorked(days) {}

    double calculateSalary() {
        return dailyRate * daysWorked;
    }

    void display() {
        cout << "Part Time Employee: Daily Rate = " << dailyRate << ", Days Worked = " << daysWorked << ", Total Salary = " << calculateSalary() << endl;
    }
};

int main() {
    // Create full-time employee
    FullTimeEmployee fullTimeEmployee(50000);
    fullTimeEmployee.display();

    // Create part-time employee
    PartTimeEmployee partTimeEmployee(2000, 9);
    partTimeEmployee.display();

    return 0;
}