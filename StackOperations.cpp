#include <iostream>
#include <stack>
using namespace std;
int main() { 
    stack<int> VITstack;
    VITstack.push(15);
    VITstack.push(20);
    VITstack.push(35);
    cout << " \nElements inserted in  the stack are 15 ,20 and 35"<< endl;
    cout << "Current size of stack is =  "<< VITstack.size()<< endl;
    if (!VITstack.empty()) {
        cout << "Top element of the stack is : "<< VITstack.top()<< endl;
VITstack.pop();
cout<<"Top element removed"<< endl;
    }else {
        cout<< "Stack is empty"<< endl;

    }

    cout<< "Size of stack after popping = "<< VITstack.size()<< endl;
    if(!VITstack.empty()){
        cout<<"Top element of new stack is : "<< VITstack.top()<< endl;
    }else {
        cout<< "Stack is empty stack "<< endl;
    
    }
return 0 ;

}

