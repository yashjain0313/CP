#include <iostream>
#include <vector>

using namespace std;

vector<int> current_solution;

void find_n_elements_sum(int n, int m, int start) {
    if (n == 0 && m == 0) {
        // Found a valid combination
        for (int i = 0; i < current_solution.size(); ++i) {
            cout << current_solution[i] << " ";
        }
        cout << endl;
        return;
    }
    
    // Backtracking
    for (int i = start; i <= m && i <= 9; ++i) {
        current_solution.push_back(i);
        find_n_elements_sum(n - 1, m - i, i + 1);
        current_solution.pop_back();
    }
}

int main() {
    int n = 4;
    int m = 16;
    find_n_elements_sum(n, m, 1); // Start from 1 (numbers from 1 to 9)
    return 0;
}
