#include <iostream>
#include <cmath>
using namespace std;
float area(float radius) {
    return M_PI * radius * radius; // M_PI is a constant for π
}
float area(int side) {
    return side * side;
}
float area(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float radius, base, height;
    int side;

    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle: " << area(radius) << endl;
    cout << "Enter side of the square: ";
    cin >> side;
    cout << "Area of Square: " << area(side) << endl;
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << area(base, height) << endl;

    return 0;
}