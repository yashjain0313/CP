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
int check(vector<int>ar,int mid,int n)
{
    return ar[(n+1)/2]; 
}
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
vector<int> ar;
vector<int> ar2;
int s=0;
for(int i=0;i<a;i++)
{
    int x;
    cin>>x;
    s+=x;
    ar2.pb(x);
}
 sort(all(ar));
    int ans=0;
    int st=ar[0];
    int end=ar[a-1];
    while(st<=end)
    {   int mid=(st+end)/2;
        if(check(ar2,mid,a)<=b)
        {   st=mid+1;  
            ans=mid;
        }
        else{
           end=mid-1;
        }
    }
    cout<<ans<<endl;
}
}