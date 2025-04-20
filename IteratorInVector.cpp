#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> marks{38, 30, 22};
    vector<int>::iterator itr1;
    for (itr1 = marks.begin(); itr1 != marks.end(); ++itr1) {
        cout << *itr1 << " ";
    }
    cout << endl;
}
