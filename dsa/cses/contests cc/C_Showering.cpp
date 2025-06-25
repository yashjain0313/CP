#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define frin(a,b,c)
#define fr(i,n) for(int i= 0; i<(n); i++) 
#define vin(a,n)  for(int i=0;i<(n);i++){ cin>>a[i];}
#define vout(a,n)  for(int i=0;i<(n);i++){ cout<<a[i];}
#define printv(k) for(auto& i:k) cout<<i<<" "; cout<<endl;
#define printmp(k) for(auto& i:k) cout<<i.first<<" "<<i.second<<endl;
#define pb push_back
#define all(x)  x.begin(), x.end()
const int MOD =1e9+7;
const int INF= LLONG_MAX>>1;
int summm=0;
//godyash

signed main()
{

ios::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);
int t;
cin>>t;
while(t--)
{
int n,s,m;
cin>>n>>s>>m;
vector<int> ar;
vector<int> ar2;
for(int i=0;i<n;i++)
{
    int x,y;
    cin>>x>>y;
    ar.pb(x);
    ar2.pb(y);
   
}
int sum=0;
int sum2=ar[0];
for(int i=0;i<n-1;i++)
{
    sum2=max(sum2,ar[i+1]-ar2[i]);
    // cout<<sum2<<endl;
}
 sum2=max(sum2,m-ar2[n-1]);



if(sum2>=s)
{
    cout<<"YES"<<endl;

}
else{
    cout<<"NO"<<endl;
}
}
}