//9. Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. 
//member functions to calculate the grade based on the marks and display the student's information.

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int className;
    int rollNumber;
    float marks;

public:
    Student(string n, int c, int r, float m) {
        name = n;
        className = c;
        rollNumber = r;
        marks = m;
    }

    char calculateGrade() {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    Student student1("Abhay Dixit", 12, 1, 85.5);
    student1.displayInfo();

    return 0;
}
