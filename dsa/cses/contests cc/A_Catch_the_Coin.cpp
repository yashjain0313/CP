
#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i= 0; i < (n); i++) 
#define arrin(a,n)  for(int i=0;i<(n);i++) cin>>a[i];
#define printv(k) for(auto& i:k) cout<<i<<" "; cout<<endl;
#define printmp(k) for(auto& i:k) cout<<i.first<<" "<<i.second<<endl;
#define pb push_back
#define all(x)  x.begin(), x.end()
#define int long long
#define inf (1LL<<60)
#define endl '\n'
#define nl cout<<endl;
const int mod=1000000007;
const int mod2=998244353;
// priority_queue <pair <int , int> , vector <pair <int , int>> , greater <pair <int , int>>> pq;
string getBinary(int n) {
bitset<64> b(n);
return b.to_string();
}


void solve() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        if(y >= -1){
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
    }

}


signed main() {
ios::sync_with_stdio(0), cin.tie(0);
cout.tie(0);
int T = 1;
// cin >> T;
while (T--) {
solve();
}
}