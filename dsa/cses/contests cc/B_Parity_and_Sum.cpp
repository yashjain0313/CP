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
    int a,b;
    cin>>a>>b;
    vector<int>v;
    for(int i=0;i<a;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int sum=0;
    int giv=0;
    for(int i=0;i<a;i++)
    {
       if(v[i]>=b){
        sum+=v[i];
       }
       else if (v[i] == 0 && sum > 0)
       {
           giv++;
           sum--;
       }
    }
    cout<<giv<<endl;



}
}




