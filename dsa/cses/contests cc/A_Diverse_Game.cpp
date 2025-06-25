#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        vector<vector<int> > v1(a, vector<int>(b));
        vector<int> a1(max(a, b)); 

        if (a == 1 || b == 1) {
            int mx = max(a, b);
            for (int i = 0; i < mx; i++) {
                cin >> a1[i];
            }
        } else {
            for (int i = 0; i < a; i++) {
                for (int j = 0; j < b; j++) {
                    cin >> v1[i][j];
                }
            }
        }

        if (a == 1 && b == 1) {
            cout << -1 << endl;
        } else if (a == 1 || b == 1) {
           if(a==1)
           { cout<<a1[b-1]<<" ";
            for (int i = 0; i < a1.size()-1; i++) {
                cout << a1[i] << " "; 
            }
            cout<<endl;}
            if(b==1)
            {cout<<a1[a-1]<<endl;;
                for (int i = 0; i < a1.size()-1; i++) {
                cout << a1[i] << endl; 
            }
           
            }

           
        } else {
            for (long long i = 0; i < a; i++) {
                for (long long j = 1; j < b; j++) {
                    cout << v1[i][j] << " ";
                }
                cout << v1[i][0]; 
                cout << endl;
            }
        }
    }
    return 0;
}
