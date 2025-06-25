
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
signed main() {
ios::sync_with_stdio(0), cin.tie(0);
cout.tie(0);
long long t ;

    long long a1,b1,a2,b2,a3,b3;
    cin>>a1>>b1>>a2>>b2>>a3>>b3;
    long double d1=(a2-a1)*(a2-a1)+(b2-b1)*(b2-b1);
    long double d2=(a3-a2)*(a3-a2)+(b3-b2)*(b3-b2);
    long double d3=(a3-a1)*(a3-a1)+(b1-b3)*(b1-b3);
    // cout<<d1<<endl<<d2<<endl<<d3<<endl;
    long long mx=max(d1,max(d2,d3));
    long long mn=min(d1,min(d2,d3));
    long long rd=d1+d2+d3-mx-mn;
    if(mx==mn+rd)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    



   
 
    
  


}
