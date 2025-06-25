
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
cin >> t;
while (t--) {
  int a,b,c;
  cin >>a>>b>> c;
  int num[3] = {c,b,a};
  sort(num,num+3);
  int m=5;
  while (m > 0) {
  if (num[0]<=num[1]&&num[0]<=num[2])
  {
  num[0]++;
   } else if (num[1]<=num[0]&&num[1]<=num[2])
   {
            num[1]++;
  } else 
  { num[2]++;
   }
   m--;
  sort(num, num + 3);
        }
        int maxx = num[0]*num[1]*num[2];
        cout<<maxx<<endl;
    }




}
