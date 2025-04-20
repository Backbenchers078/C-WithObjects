#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n1, n2, temp;
    std::vector<int> vec1, vec2;

    std::cout << "Enter number of elements in first vector: ";
    std::cin >> n1;
    std::cout << "Enter " << n1 << " elements:\n";
    for (int i = 0; i < n1; ++i) {
        std::cin >> temp;
        vec1.push_back(temp);
    }
    std::cout << "Enter number of elements in second vector: ";
    std::cin >> n2;
    std::cout << "Enter " << n2 << " elements:\n";
    for (int i = 0; i < n2; ++i) {
        std::cin >> temp;
        vec2.push_back(temp);
    }
    std::vector<int> finalVec = vec1;
    finalVec.insert(finalVec.end(), vec2.begin(), vec2.end());

std::sort(finalVec.begin(), finalVec.end());

    std::cout << "Combined and sorted vector: ";
    for (int num : finalVec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
}
