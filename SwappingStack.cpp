
#include <iostream>
#include <stack>
using namespace std;
void displayStack(stack<int> s, const string& name) {
    cout << name << ": ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main() {
    stack<int> stack1, stack2;
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    stack2.push(100);
    stack2.push(200);
    stack2.push(300);
    cout << "Before swap:" << endl;
    displayStack(stack1, "Stack 1");
    displayStack(stack2, "Stack 2");
    stack1.swap(stack2);
    cout << "\nAfter swap:" << endl;
    displayStack(stack1, "Stack 1");
    displayStack(stack2, "Stack 2");

    return 0;
}
