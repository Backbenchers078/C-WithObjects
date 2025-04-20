#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> BuriBuri;
             int e ; 
        BuriBuri.push(1);
        BuriBuri.push(2);
        BuriBuri.push(3);
std::cout<<BuriBuri.size()
cout<< "\n Enter an element to access";
std::cin>> e; 

 
    if(BuriBuri.top == e)
        std::cout<<BuriBuri.top();
        
            else
            std::cout<<e <<"\n is not present";

}