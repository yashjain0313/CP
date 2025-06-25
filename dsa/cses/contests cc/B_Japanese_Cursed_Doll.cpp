#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, t, p;
    cin >> n >> t >> p;
    
    vector<int> v1(n);
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }
    
    int hwt = 0;
    int cmr = 0;
    for (int i = 0; i < n; ++i) {
        if (v1[i] >= t) {
            cmr++;
        }
    }
    
    if (cmr >= p) {
        cout << 0 << endl;
        return 0;
    }
    

    while (true) {
        hwt++;
        
    
        for (int i = 0; i < n; ++i) {
            v1[i]++;
        }
        cmr = 0;
        
        for (int i = 0; i < n; ++i) {
            if (v1[i] >= t) {
                cmr++;
            }
        }
        
       
        if (cmr >= p) {
            cout << hwt << endl;
            return 0;
        }
    }
    
    return 0;
}
