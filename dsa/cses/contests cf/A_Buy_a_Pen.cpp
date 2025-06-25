
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

    long long a,b,c;
    string s;

    cin>>a>>b>>c;
    cin>>s;
    int sum=0;
    if(s=="Red")
    {   if(b==c)
    {
        cout<<b;
    }
    else
       { cout<<min(b,c);}
    }
    else if(s=="Blue")
    {    if(b==a)
    {
        cout<<a;
    }
    else {
        cout<<min(b,a);}
    }
     else 
    { if(a==c)
    {
        cout<<a;
    }else
      {  cout<<min(a,c);}
    }



   
 
    
  


}
