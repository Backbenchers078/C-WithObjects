#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v) : value(v) {}
    friend int add(Number, Number); 
};

int add(Number n1, Number n2) {
    return n1.value + n2.value;
}

int main() {
    Number num1(5), num2(10);
    cout << "Sum: " << add(num1, num2) << endl;
    return 0;
}
