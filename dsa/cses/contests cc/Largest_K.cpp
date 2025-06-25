#include <iostream>
#include <vector>

int countDifferences(const std::vector<char>& v1, const std::vector<char>& v2) {
    if (v1.size() != v2.size()) {
        throw std::invalid_argument("Vectors must be of the same length");
    }
    
    int differences = 0;
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            ++differences;
        }
    }
    return differences;
}

int main() {
    std::vector<char> v1 = {'a', 'b', 'c', 'd'};
    std::vector<char> v2 = {'b', 'c', 'd', 'e'};
    
    std::cout << countDifferences(v1, v2) << std::endl;  // Output: 1
    return 0;
}
