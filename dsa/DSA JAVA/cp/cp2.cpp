#include<bits/stdc++.h>
using namespace std;

signed main() {
    long long  t;
    cin >> t;
    while (t--) {
        long long  a;
        cin >> a;
        long long  ar[6] = {1, 2, 4, 8, 16, 32};
        vector<long long > pp;
        long long  c = ceil(log2(a));
            long long  b = ar[c] - a; 
            long long  temp=b;
            while (temp != 0) {
                long long  nm = temp % 2;
                if (nm == 1) {
                    pp.push_back(nm*-1);
                } else {
                    pp.push_back(nm);
                }
                temp = temp / 2;
            }
            long long  as = c-pp.size();
            while (as!=0) {
                pp.push_back(0);
                as--;
            }
            pp.push_back(1);
            cout << pp.size() << "\n";
            for (long long  i = 0; i < pp.size(); i++) {
                cout << pp[i] << " ";
            }
            cout << endl;
        
    }
    return 0;
}
