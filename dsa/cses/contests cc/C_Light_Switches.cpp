#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false); cin.tie(0);
  
  int tt;
  cin >> tt;
  while(tt--) {
    int n, k, flg = 0, mx = 0,t, sum = 0, val = INT_MAX; 
    cin >> n >> k;


    vector<int> arr(2*k);
    
    for (int i = 0; i < n; ++i) {
      cin >> t;
      mx = max(t, mx);
      arr[t%(2*k)]++; 
    }

    for (int i = k; i < 2*k; ++i) {
      sum+=arr[i];
    }
    for (int i = 0; i < 2*k; ++i) {
      sum -= arr[(2*k+i-k)%(k*2)];
      sum += arr[i];
       if (sum == n) {val = min(val, (mx-mx%(2*k)+i >= mx ? mx-mx%(2*k)+i : mx-mx%(2*k)+i +2*k)); flg = 1; }



    }
    if (flg) {cout << val << '\n'; continue;}
    cout << -1 << '\n';

  }
}

