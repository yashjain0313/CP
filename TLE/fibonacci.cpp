
#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i= 0; i < (n); i++) 
#define numin(a,n)  for(int i=0;i<(n);i++) cin>>a[i];
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
int x=0;
int dp[100] = {0};

int helper(int a)
{ x++;
    if(a==1||a==2)
    {
        return 1;
    }
    if(dp[a]!=0)
    return dp[a];
    else
    return dp[a]=helper(a-1)+helper(a-2);
}

signed main() {
ios::sync_with_stdio(0), cin.tie(0);
cout.tie(0);
int n;
cin>>n;

cout<<helper(n)<<" "<<x<<endl;




}