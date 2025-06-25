#include <bits/stdc++.h>
using namespace std;

signed main() {
    long t;
    cin >> t;
    while (t--) {
        long a;
        cin >> a;
        int ar[a + 1];
        int as[a + 1];
        long long sum = 0;

        // Input elements of array ar
        for (long long i = 0; i < a; i++) {
            cin >> ar[i];
        }

        // Input elements of array as
        for (long long i = 0; i < a + 1; i++) {
            cin >> as[i];
        }

        // Check if as[a] is present in ar
        bool found = false;
        for (long long i = 0; i < a + 1; i++) {
            if (ar[i] == as[a]) {
                found = true;
                break;
            }
        }
        if (found) {
            ar[a] = as[a];
            sum += 1;
        } else {
            // Calculate sum based on comparison logic
            long comparison = 0;
            for (long long i = 0; i < a + 1; i++) {
                if ((as[a] < ar[i] && as[a] >= as[i]) || (as[a] >= ar[i] && as[a] < as[i])) {
                    comparison = 1;
                    sum += 1;
                    break;
                }
            }

            if (comparison == 0) {
                long long diff1 = abs(as[a - 1] - ar[0]);
                long long diff2 = abs(as[a - 1] - ar[a - 1]);
                sum += min(diff1, diff2);
                sum++;
            }
        }

        // Calculate sum of absolute differences between corresponding elements of ar and as
        for (long long i = 0; i < a; i++) {
            long long diff = abs(ar[i] - as[i]);
            sum += diff;
        }

        cout << sum << endl;
    }

    return 0;
}
