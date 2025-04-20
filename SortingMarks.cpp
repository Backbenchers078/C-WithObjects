#include <iostream>
#include<list>
using namespace std;
int main() {
list<int>marks = {1,5,6,78,75};
list<int>::iterator it;
marks.sort();
for(it=marks.begin();it!=marks.end();it++)
{std::cout<<*it<<endl;
}

return 0 ;
}