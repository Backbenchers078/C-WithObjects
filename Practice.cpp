#include <iostream>
using namespace std;
void addThreeIntegers(int a, int b, int c) {
    int sum = a + b + c;
    cout << "The sum of the three integers is: " << sum << endl;
}

int main() {
    int num1, num2, num3;
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    cout << "Enter the third integer: ";
    cin >> num3;
    addThreeIntegers(num1, num2, num3);

    return 0;
}
