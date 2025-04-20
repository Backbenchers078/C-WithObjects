#include <iostream>
#include <vector>
int main() {
vector<int> fruits{ Apple,Banana,Cherry};
cout<< "Original Fruits are"\n;
for (int i = 0; i < fruits.size(); i++) {
    cout<< fruits[i] << " ";
}
    fruits.pop_back();
    cout<< \n"Fruits Vector AFTER DELETION IS "\n;
    for (int i = 0; i < fruits.size(); i++) {
        cout<< fruits[i] << " ";
        }
        










}