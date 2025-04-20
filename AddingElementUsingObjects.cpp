#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    string name;
    int roll;

    Student(string n, int r) {
        name = n;
        roll = r;
    }

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};
int main() {
    vector<Student> students = {
        Student("Alice", 1),
        Student("Bob", 2),
        Student("Charlie", 3)
    };
    cout << "Initial list of students:\n";
    for (int i = 0; i < students.size(); i++) {
        students[i].display();
    }
    students.push_back(Student("David", 4));
    cout << "\nAfter adding one student:\n";
    for (int i = 0; i < students.size(); i++) {
        students[i].display();
    }

    return 0;
}
