#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
   vector<string> fruits{ "Apple","Banana","Cherry"};
cout << "Original Fruits are:\n";
for (int i = 0; i < fruits.size(); i++) {
    cout<< fruits[i] << " ";
}
cout << endl;
    fruits.pop_back();
    cout << "\nFruits Vector AFTER DELETION IS \n";
    for (int i = 0; i < fruits.size(); i++) {
        cout<< fruits[i] << " ";
        }
        cout<<endl;
return 0;
}