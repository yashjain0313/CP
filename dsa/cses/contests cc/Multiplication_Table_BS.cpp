#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define frin(a,b,c)
#define fr(i,n) for(int i= 0; i<(n); i++) 
#define vin(a,n)  for(int i=0;i<(n);i++){ cin>>a[i];}
#define vout(a,n)  for(int i=0;i<(n);i++){ cout<<a[i];}
#define printv(k) for(auto&i:k) cout<<i<<" "; cout<<endl;
#define printmp(k) for(auto& i:k) cout<<i.first<<" "<<i.second<<endl;
#define pb push_back
#define all(x)  x.begin(), x.end()
const int MOD =1e9+7;
const int INF= LLONG_MAX>>1;
//godyash

bool check(int n,int mid,int k)
{   int count=0;
// cout<<mid<<"aaa"<<endl;
    for (int i=0;i<n;i++)
    {   
        count+=min(mid/(i+1),n);
        // cout<<count<<endl;
    }
    if(count<k)
    {
        return true;
    }
    else
    {
        return false;
    }

}

signed main()
{
ios::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);
int n;
cin>>n;
int st=0;
int en=n*n;
int ans=0;
int k=(1+n*n)/2;
while(st<=en)
{
    int mid=(st+en)/2;
    if(check(n,mid,k))
    {
        st=mid+1;
        ans=st;
    }
    else
    {
        en=mid-1;
       
    }
    
}
cout<<ans<<endl;








// 1 2 3 4 5
// 2 4 6 8 10 
// 3 6 9 12 15
// 4 8 12 16 20
// 5 10 15 20 25
// 1 2 2 3 3 4 4 4 5 5 6 6 8 8 9 10 10 12 12 15 15 16 20 20 25 






}
            
