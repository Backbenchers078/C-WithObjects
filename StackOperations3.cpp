#include <iostream>
#include <stack>
#include <vector> 
void demonstrateStackFunctions() {
    std::stack<int> myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    std::vector<int> vec; // Converting to Vector 
    while (!myStack.empty()) {
        vec.push_back(myStack.top());
        myStack.pop();
    }
    std::cout << "Elements in stack (using vector): ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "Maximum size of stack: " << myStack.max_size() << std::endl; // Giving  max_size()
    std::cout << "Current size of stack: " << vec.size() << std::endl; // Size of vector used
    std::reverse(vec.begin(), vec.end()); // Reverse  vector
    std::cout << "Reversed elements: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    std::cout << "Is the stack empty? " << (myStack.empty() ? "Yes" : "No") << std::endl;
    if (!vec.empty()) {
        std::cout << "Element at index 0: " << vec.at(0) << std::endl; 
    }
    if (!vec.empty()) {
        std::cout << "First element (front): " << vec.front() << std::endl; // Access first element
    }
    if (!vec.empty()) {
        std::cout << "Last element (back): " << vec.back() << std::endl; // Access last element
    }
}
int main() {
    demonstrateStackFunctions();
    return 0;
}