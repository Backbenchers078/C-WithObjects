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
stack<int> mergeStacks(stack<int> s1, stack<int> s2) {
    stack<int> temp, merged;
    while (!s1.empty()) {
        temp.push(s1.top());
        s1.pop();
    }
    while (!temp.empty()) {
        merged.push(temp.top());
        temp.pop();
    }
    while (!s2.empty()) {
        temp.push(s2.top());
        s2.pop();
    }
    while (!temp.empty()) {
        merged.push(temp.top());
        temp.pop();
    }
    return merged;
}
int main() {
    stack<int> stack1, stack2;
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack2.push(4);
    stack2.push(5);
    stack2.push(6);
    cout << "Original stack : \n";
    displayStack(stack1, "Stack 1");
    cout << "Stack after merging : \n";
    displayStack(stack2, "Stack 2");
    stack<int> merged = mergeStacks(stack1, stack2);
    cout << "\nMerged Stack (Stack1 on bottom, Stack2 on top):\n";
    displayStack(merged, "Merged");
    return 0;
}
