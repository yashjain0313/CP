#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        vector<vector<char> > v1(a, vector<char>(b));
        vector<int> v2;
        vector<int> v3;
        int ctr = 0;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                char x;
                cin >> x;
                v1[i][j] = x; 
                if (x == '#') {
                    v2.push_back(i);
                    v3.push_back(j);
                    ctr++;
                }
            }
        }
        if (v1.size() == 1) {
            cout << v2[0]+1 << " " << v3[0]+1<<"\n";
        } else {
            int x = v2[0], y = v3[0];
           int z=v2[v2.size()-1]-v2[0];
           int z1=v2[z];
             cout << z1+1<< " " << y+1<<"\n";

    }
   
}


}