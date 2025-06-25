#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n, 1);
    a[x-1] = -1; 
    a[y-2] = -1; 
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
