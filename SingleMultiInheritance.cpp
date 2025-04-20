#include <iostream>
#include <string>
using namespace std;

// Base class
class Student {
protected:
    string name;
    int marks;

public:
    Student(string n, float m) : name(n), marks(m) {}

    // Function to display student information
    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};
// Derivation of class for single-level inheritance
class Result : 
public Student {
public:
    Result(string n, int m) : Student(n, m) {}
};

// Derivation of  class for multi-level inheritance
class FinalResult : public Result {
public:
    FinalResult(string n, int m) : Result(n, m) {}
};

int main() {
    // inherits from multi level derivation of class Result
    FinalResult student1("Parth Sharma", 82);

    // Display the student information
    student1.display();

    return 0;
}