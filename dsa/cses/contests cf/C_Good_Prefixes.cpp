#include <iostream>
#include <vector>
#include <algorithm>
#define arrin(a,n)  for(long long i=0;i<(n);i++) cin>>a[i];

using namespace std;

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    long long n;
    cin >> n;
    
    while (n--) {
       long long n;
    cin>>n;
    long long a[n];
    arrin(a,n);
    long long pref[n];
    pref[0] = a[0];
    for(long long i=1;i<n;i++){
        pref[i] = pref[i-1] + a[i];
    }
    long long mx[n];
    mx[0] = a[0];
    for(long long i=1;i<n;i++){
        mx[i] = max(mx[i-1],a[i]);
    }
    long long res = 0;
    for(long long i=0;i<n;i++){
        long long sum = pref[i];
        long long mxm = mx[i];
        if(sum == 2*mxm){
            res++;
        }
    }
    cout<<res<<endl;

  
}
}