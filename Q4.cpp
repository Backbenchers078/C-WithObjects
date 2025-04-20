#include <iostream>
#include <vector>
using namespace std;

int main() {
    int passingMarks, numCourses;
    cout << "Welcome to Student Result Checker" << endl;
    cout << "Enter the passing marks: ";
    cin >> passingMarks;
    cout << "Enter number of courses (3, 4, or 5): ";
    cin >> numCourses;
    if (numCourses < 3 || numCourses > 5) {
        cout << "Invalid number of courses. Please enter 3, 4, or 5." << endl;
        return 0;
    }
    vector<int> scores(numCourses);
    for (int i = 0; i < numCourses; ++i) {
        cout << "Enter marks for course " << i + 1 << ": ";
        cin >> scores[i];
    }
    
    cout << "\nChecking result..." << endl;
    for (int i = 0; i < numCourses; ++i) {
        if (scores[i] >= passingMarks) {
            cout << "Course " << i + 1 << ": Passed (" << scores[i] << ")" << endl;
        } else {
            cout << "Course " << i + 1 << ": Failed (" << scores[i] << ")" << endl;
            


        }
    return 0;
}