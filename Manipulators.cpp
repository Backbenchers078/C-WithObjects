// Manipulators in C++ are special functions used with 
// input/output streams (like cin and cout) to modify the format of the data being input or output. 
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num = 42;
    double pi = 3.1415926535;
    bool flag = true;

    // endl
    cout << "Using endl:" << endl;
    cout << "Hello" << endl << "World" << endl;

    // setw and setfill
    cout << "\nUsing setw and setfill:" << endl;
    cout << setfill('*') << setw(10) << num << endl;

    // setprecision and fixed
    cout << "\nUsing setprecision and fixed:" << endl;
    cout << fixed << setprecision(4) << pi << endl;

    std::string a, b;
    std::cin >> a >> b;  // whitespace is skipped between words
    std::cout << a << " | " << b << std::endl;


 std::cin >> std::noskipws;
    while (std::cin >> ch) {
        std::cout << '[' << ch << ']';
    } // for noskipws

    // scientific
    cout << "\nUsing scientific:" << endl;
    cout << scientific << pi << endl;

    // left, right, internal
    cout << "\nUsing left, right, and internal:" << endl;
    cout << left << setw(10) << num << " <- left aligned" << endl;
    cout << right << setw(10) << num << " <- right aligned" << endl;
    cout << internal << setw(10) << -num << " <- internal aligned" << endl;

    // boolalpha and noboolalpha
    cout << "\nUsing boolalpha and noboolalpha:" << endl;
    cout << boolalpha << "boolalpha: " << flag << endl;
    cout << noboolalpha << "noboolalpha: " << flag << endl;

    return 0;
}
