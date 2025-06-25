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
int sum=0;
int dp[1000];
//godyash
int helper(int n)
{   sum++;
    if(n==1||n==2)
     {  return 1;}
    if(dp[n]!=-1)
    { return dp[n];}
    dp[n]=helper(n-1)+helper(n-2);
    return dp[n];
}
signed main()
{
ios::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);
int a;
cin>>a;
for(int i=0;i<=1000;i++)
{
    dp[i]=-1;
}
cout<<helper(a)<<endl;
cout<<sum;


}