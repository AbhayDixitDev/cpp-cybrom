//
//Write a cpp code for class named Circle 
//constructed by a radius and two methods 
//which will compute the area and the perimeter of a circle


#include <iostream>
#include <cmath> 

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() {
        return M_PI * pow(radius, 2);
    }

    double calculatePerimeter() {
        return 2 * M_PI * radius;
    }
};

int main() {
    Circle myCircle(5.0); 

    std::cout << "Area of the circle: " << myCircle.calculateArea() << std::endl;
    std::cout << "Perimeter of the circle: " << myCircle.calculatePerimeter() << std::endl;

    return 0;
}
