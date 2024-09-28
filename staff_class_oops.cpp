//5. Create a class staff having fields: Staff_id , name, salary. Write a menu driven program for:
//
//1) To accept the data
//2) To display the data
//3) To sort the data by name

#include <iostream>
#include <string>

using namespace std;

class Staff {
private:
    int staff_id;
    string name;
    double salary;

public:
    // Default constructor
    Staff() : staff_id(0), name(""), salary(0.0) {}

    Staff(int id, string n, double s) {
        staff_id = id;
        name = n;
        salary = s;
    }

    int getStaffId() const {
        return staff_id;
    }

    string getName() const {
        return name;
    }

    double getSalary() const {
        return salary;
    }

    static void acceptData(Staff*& staff, int& count) {
        int id;
        string name;
        double salary;

        cout << "Enter staff ID: ";
        cin >> id;
        cout << "Enter staff name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter staff salary: ";
        cin >> salary;

        Staff* temp = new Staff[count + 1];
        for (int i = 0; i < count; i++) {
            temp[i] = staff[i];
        }
        temp[count] = Staff(id, name, salary);
        delete[] staff;
        staff = temp;
        count++;
    }

    static void displayData(Staff* staff, int count) {
        cout << "Staff Data:" << endl;
        for (int i = 0; i < count; i++) {
            cout << "ID: " << staff[i].getStaffId() << ", Name: " << staff[i].getName() << ", Salary: " << staff[i].getSalary() << endl;
        }
    }

    static bool sortByNames(const Staff& a, const Staff& b) {
        return a.getName() < b.getName();
    }

    static void sortData(Staff* staff, int count) {
        for (int i = 0; i < count - 1; i++) {
            for (int j = i + 1; j < count; j++) {
                if (staff[i].getName() > staff[j].getName()) {
                    Staff temp = staff[i];
                    staff[i] = staff[j];
                    staff[j] = temp;
                }
            }
        }
    }
};

int main() {
    Staff* staff = nullptr;
    int count = 0;
    int choice;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Accept staff data" << endl;
        cout << "2. Display staff data" << endl;
        cout << "3. Sort staff data by name" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                Staff::acceptData(staff, count);
                break;
            case 2:
                Staff::displayData(staff, count);
                break;
            case 3:
                Staff::sortData(staff, count);
                Staff::displayData(staff, count);
                break;
            case 4:
                delete[] staff;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}