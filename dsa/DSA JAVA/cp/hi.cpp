#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the origin of a number
int origin(int n) {
    while (n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}

// Function to calculate the sum of origin values from 1 to N using dynamic programming
long long sumOfOrigins(int N) {
    vector<int> dp(10, 0); // DP array to store sum of origin values for numbers from 1 to 9
    for (int i = 1; i <= 9; ++i) {
        dp[i] = dp[i - 1] + origin(i);
    }
    
    long long sum = 0;
    int cycle = N / 9; // Number of complete cycles
    int remainder = N % 9; // Remaining numbers after complete cycles
    
    // Sum for complete cycles
    sum = cycle * dp[9];
    
    // Sum for remaining numbers
    if (remainder > 0) {
        sum += dp[remainder];
    }
    
    return sum;
}

int main() {
    int T;
    cin >> T;
    
    while (T-- > 0) {
        int N;
        cin >> N;
        cout << sumOfOrigins(N) << endl;
    }
    
    return 0;
}


