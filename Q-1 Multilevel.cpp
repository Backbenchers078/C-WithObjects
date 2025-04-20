#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int roll;
    void getStudent() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
    }
};
class Internal : public Student {
public:
    int internalMarks;
    void getInternal() {
        cout << "Enter internal marks (out of 50): ";
        cin >> internalMarks;
    }
};
class Result : public Internal {
public:
    int externalMarks;
    void getExternal() {
        cout << "Enter external marks (out of 50): ";
        cin >> externalMarks;
    }
    void showResult() {
        cout << "\nName: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Internal Marks: " << internalMarks << endl;
        cout << "External Marks: " << externalMarks << endl;
        cout << "Total Marks: " << (internalMarks + externalMarks) << endl;
    }
};
int main() {
    Result s;
    s.getStudent();
    s.getInternal();
    s.getExternal();
    s.showResult();
    return 0;
}
