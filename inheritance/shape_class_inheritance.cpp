//10. Write a C++ program to implement a class called Shape with virtual member functions for calculating area and perimeter.
//Derive classes such as Circle, Rectangle, and Triangle from the Shape class and override virtual functions accordingly.


#include <iostream>
#include <cmath>

using namespace std;

class Shape {
protected:
    string name;

public:
    Shape(string n) {
        name = n;
    }

    virtual double area() = 0;
    virtual double perimeter() = 0;

    void displayInfo() {
        cout << "Shape: " << name << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
        cout << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(string n, double r) : Shape(n) {
        radius = r;
    }

    double area() override {
        return 3.14159 * radius * radius;
    }

    double perimeter() override {
        return 2 * 3.14159 * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(string n, double l, double w) : Shape(n) {
        length = l;
        width = w;
    }

    double area() override {
        return length * width;
    }

    double perimeter() override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;
    double side1;
    double side2;
    double side3;

public:
    Triangle(string n, double b, double h, double s1, double s2, double s3) : Shape(n) {
        base = b;
        height = h;
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    double area() override {
        return 0.5 * base * height;
    }

    double perimeter() override {
        return side1 + side2 + side3;
    }
};

int main() {
    Circle circle("Circle", 5.0);
    circle.displayInfo();

    Rectangle rectangle("Rectangle", 4.0, 6.0);
    rectangle.displayInfo();

    Triangle triangle("Triangle", 3.0, 4.0, 3.0, 4.0, 5.0);
    triangle.displayInfo();

    return 0;
}
