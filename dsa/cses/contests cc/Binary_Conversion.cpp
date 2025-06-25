
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

const int N = 2e5 + 5;
int spf[N];

void sieve() {
    for(int i=1;i<N;i++){
        spf[i] = i;
    }
    for(int i=2;i*i<N;i++){
        if(spf[i] == i){
            for(int j=i*i;j<N;j+=i){
                spf[j] = i;
            }
        }
    }
}

void solve() {
    int n;
    cin>>n;

    int a[n+1];
    for(int i=0;i<=n;i++){
        a[i] = 1;
    }
    for(int i=1;i<=n;i++){
        int x = (n/i);
        int y = log2(x) + 1;
        a[i] = y;
    }
    int mmx = 0;
    for(int i=1;i<=n;i++){
        mmx = max(mmx , a[i]);
    }
    cout<<mmx<<"\n";
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    nl;
}


signed main() {
ios::sync_with_stdio(0), cin.tie(0);
cout.tie(0);
sieve();
int T = 1;
cin >> T;
while (T--) {
solve();
}
}