//8)Write a C++ program to define a class named Employee.
//private member: name, employee ID, dep ,designation,performance(bad-0,avg-1,good-2,very-good-3,
//best-4 (use default constructor)
//public member functions:setter(),getter()

//9)Write a C++ program to define a class named EmpSalary which can inherit the above class Employee and its visibility mode is public.
//its own attribute are:
//private member: salary,basic,hra,da,pf (basic+hra+da-pf)
//public member functions:salary(),bonus()--> if performance is equal to or above 2-->get bonus of 2000
//create a object of child and display results.


#include <iostream>
using namespace std;

class Employee {
private:
    string name, department, desig;
    int eid;
    string performance;

    void setPerformance() {
        int choice;
        start:
        cout << "Please select performance in the following options:\n";
        cout << " '0-bad' ,'1-avg','2-good','3-vgood','4-best' :";
        cin >> choice;
        switch (choice) {
            case 0: performance = "bad"; break;
            case 1: performance = "average"; break;
            case 2: performance = "good"; break;
            case 3: performance = "v good"; break;
            case 4: performance = "best"; break;
            default:
                cout << "Wrong choice. Please select again.\n";
                goto start;
        }
    }

public:
    Employee(int e, string n, string d, string des) {
        eid = e;
        name = n;
        department = d;
        desig = des;
        setPerformance();
    }

    string getPerformance() const { return performance; }

    void displayEmployeeInfo() {
        cout << "Eid: " << eid << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Designation: " << desig << endl;
        cout << "Performance: " << performance << endl;
    }
};

class EmpSalary : public Employee {
private:
    double salary, basic, hra, da, pf;
    double bonus;

    double prepareSalary() {
        return basic + hra + da - pf + bonus;
    }

public:
    EmpSalary(int e, string n, string d, string des, double b, double h, double d_a, double p_f)
        : Employee(e, n, d, des), basic(b), hra(h), da(d_a), pf(p_f) {
        if (getPerformance() == "good" || getPerformance() == "v good" || getPerformance() == "best") {
            bonus = 2000;
        } else {
            bonus = 0;
        }
        salary = prepareSalary();
    }

    void display() {
        displayEmployeeInfo();
        cout << "Basic: " << basic << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "PF: " << pf << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Net salary: " << salary << endl;
    }
};

int main() {
    EmpSalary employee1(1, "John", "IT", "Software Engineer", 12000, 3000, 1200, 2000);
    employee1.display();

    return 0;
}

