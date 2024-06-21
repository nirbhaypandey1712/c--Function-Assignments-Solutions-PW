// Q2 - Given radius of a circle. Write a function to print the area and circumference of the circle?

#include <iostream>
#include <cmath>
using namespace std;

void printAreaAndCircumference(double radius){
    const double PI = 3.14159;
    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;

    cout << "Area of circle is: " << area << endl;
    cout << "Crircumference of circle is: " << circumference << endl;
}

int main () {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    printAreaAndCircumference(radius);
    return 0;
}