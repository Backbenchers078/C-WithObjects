#include <iostream>
using namespace std;

class Internal {
public:
    int internalMarks;

    void getInternal() {
        cout << "Enter internal marks (out of 50): ";
        cin >> internalMarks;
    }
};

class External {
public:
    int externalMarks;

    void getExternal() {
        cout << "Enter external marks (out of 50): ";
        cin >> externalMarks;
    }
};

class Student : public Internal, public External {
public:
    string name;
    int roll;

    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
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
    Student s;
    s.getDetails();
    s.getInternal();
    s.getExternal();
    s.showResult();

    return 0;
}
