#include <iostream>
using namespace std;

const int MOD = 1000000007;

long long calculate_sqing_sum(int N) {
    long long total_sum = 0;

    // Iterate through all possible binary strings of length N
    for (int num = 0; num < (1 << N); ++num) {
        long long X = 0;

        // Check pairs (i, j) where 1 <= j < i
        for (int i = 1; i < N; ++i) {
            int j = -1;
            for (int k = 0; k < i; ++k) {
                if (((num >> k) & 1) != ((num >> i) & 1)) {
                    j = k;
                }
            }
            if (j != -1) {
                X += (i - j) * (i - j);
                X %= MOD;
            }
        }

        total_sum = (total_sum + X) % MOD;
    }

    return total_sum;
}

int main() {
    int N = 838;  
    long long sqing_sum = calculate_sqing_sum(N);
    cout << "Sum of sqing values for binary strings of length " << N << " is: " << sqing_sum << endl;

    return 0;
}
