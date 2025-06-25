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
    vector<int>v;
    int a,b;
    cin>>a>>b;
    int l=0;
    int del=0;
    // for(int i=0;i<a;i++)
    // {     if(del<=b)
    //     {  del++;
    //    l+=static_cast<int>(pow(i+1,i+1));}
    //    if(del>b){
    //     l-=static_cast<int>(pow(i+1-b,i+1-b));
    //     del=1;
    //    }
       
    // }
    // cout<<l<<endl;
    // if(l%2)
    // {
    //     cout<<"NO"<<endl;
    // }
    // else{
    //     cout<<"YES"<<endl;
    // }

    for(int i=1;i<=a;i++)
    {
       v.push_back(pow(i,i));
    }
    int ans=0;
   for(int i=v.size()-1;i>=a-b;i--)
   {
        ans+=v[i];
        // cout<<i<<endl;
   }
//    cout<<ans<<endl;
   if(ans%2==1)
   {
       cout<<"NO"<<endl;
   }
   else{
       cout<<"YES"<<endl;
   }

   
}
}




