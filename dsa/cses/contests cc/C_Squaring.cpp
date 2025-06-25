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
        int a;
        cin >> a;
        vector<int> v1(a);
        for (int i = 0; i < a; i++) {
            cin >> v1[i];
        }
        int ctr = 0;
        for (int i = 1; i < a; i++) {
            if (v1[i] <= v1[i - 1]) {
             if(v1[i-1]-v1[i]<v1[i-1])
            {   v1[i]=v1[i]*v1[i];
                ctr++;
            }
             else{
                
               for(int i=1;i<INF;i++)
               {
                     v1[i+1]=v1[i+1]*v1[i+1];
                     ctr++;
                     if(v1[i+1]>v1[i])
                     {
                        break;
                     }
            }
        }
        
       
    }
        }
         cout << ctr << endl;
    }

    return 0;
}
