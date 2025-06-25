#include <bits/stdc++.h>
#include <bitset>

int main() {
   
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m; cin >> n >> m;
        if(n&1) {
            if(m&1 && m <= n) {
                cout << "Yes" << "\n";
            } else{
                cout <<"No" << "\n";
            }
        } else {
            if(!(m&1) && m <= n) {
                cout << "Yes" << "\n";
            } else{
                cout << "No" << "\n";
            }
        }
        
    }

    return 0;
}