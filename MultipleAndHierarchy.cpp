#include <iostream>
#include <string>
using namespace std;
//First Parent class in this program - Student 
class Student {
    string name;
public:
    Student(string n) : name(n) {}
    void display() 
    { cout << "Name: " << name << endl; }
};
// Marks is  another Parent class here 
class Marks {
    int marks;
public:
    Marks(int m) : marks(m) {}
    void display() 
    { cout << "Marks: " << marks << endl; }
};
// Grade = Third Parent class in the program
class Grade {
    char grade;
public:
    Grade(char g) : grade(g) {}
    void display() 
    { cout << "Grade: " << grade << endl; }
};
class Result : public Student, public Marks, public Grade {
public:
    Result(string n, int m, char g) : Student(n), Marks(m), Grade(g) {}
    void display() {
        Student::display();
        Marks::display();
        Grade::display();
    }
};
class FinalResult : public Result {
public:
    FinalResult(string n, float m, char g) : Result(n, m, g) {}
};
int main() {
    FinalResult student("Parth sharma", 87, 'B');
    student.display();
    return 0;
}