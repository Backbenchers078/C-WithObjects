#include <iostream>
#include <vector>
using namespace std;
int main() {
vector<int> marks{38,30,22};
 cout<< "Original Vector\n" ;
for (int i = 0; i < marks.size(); i++) {
    cout << marks[i] << " ";
}
marks.push_back(7);
 cout<< "\nNew Vector\n" ;
for (int i = 0; i < marks.size(); i++) {
    cout << marks[i] << " ";
}
 return 0 ;

}