#include <iostream>
#include <vector>

using namespace std;

void ppo(const vector<vector<bool> >& dp, int n, int sum) {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}

bool targetsum(int v1[], int n, int sum) {
    // Create a 2D vector for dynamic programming
    vector<vector<bool> > dp(n + 1, vector<bool>(sum + 1, false)); 

    // Initialize dp[i][0] = true (sum of 0 can be formed with any subset)
    for (int i = 0; i <= n; i++) {
        dp[i][0] = true;
    }

    // Fill the dp table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            int v = v1[i - 1];
            // Include the current element if it does not exceed the current sum
            if (v <= j) {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - v];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    // Print the DP table after it has been filled
    ppo(dp, n, sum);
    
    return dp[n][sum];
}

int main() {
    int v1[] = {4, 2, 7, 1, 3};
    int sum = 10;
    int n = sizeof(v1) / sizeof(v1[0]);

    cout << (targetsum(v1, n, sum) ? "True" : "False") << endl;

    return 0;
}
