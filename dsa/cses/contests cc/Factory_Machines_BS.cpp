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
//godyash
bool check(int ar[],int k,int mid,int a)
{
    int pm=0;
    for(int i=0;i<a;i++)
    {
        pm+=mid/ar[i];
        if(pm>=k)
        {
            return true;
        }
    }
    return false;

}

signed main()
{
ios::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);
int a,k;
cin>>a>>k;
int ar[a];
for(int i=0;i<a;i++)
{
   cin>>ar[i];}
int st=0;
int end=1e18;
int ans=0;
while(st<=end)
{
    int mid=(st+end)/2;
    if(check(ar,k,mid,a))
    {   ans=mid;
        end=mid-1;   
    }
    else{
        st=mid+1;
    }

}
cout<<ans<<endl;



}
            
