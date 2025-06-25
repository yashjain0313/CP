#include <iostream>
#include <vector>

using namespace std;

// Update the function to accept a reference to a 2D array
void ppo(int dp[][100], int n, int s) {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= s; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}

int countWays(const vector<int>& v1, int n, int s) {
    int dp[100][100]; // Keep this static size for the dp array

 for (int j = 1; j <= s; j++) {
        dp[0][j] = 0; // No way to form a positive sum with zero elements
    }
    // Initialize the dp array
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 1; // There's one way to make the sum 0: use no elements
    }
    // Fill the dp table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= s; j++) {
            if (v1[i - 1] <= j) {
                dp[i][j] =  dp[i][j - v1[i - 1]];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    ppo(dp, n, s); // Print the dp table

    return dp[n][s];
}

int main() {
    // Create a vector of integers
    vector<int> v1 ;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(5);
    

    int sum = 11;
    int n = v1.size(); // Correctly get the size of the vector

    cout << countWays(v1, n, sum) << endl; // Call the function

    return 0;
}
