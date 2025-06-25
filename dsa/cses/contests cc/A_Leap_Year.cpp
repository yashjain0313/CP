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

signed main()
{
ios::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);
int a,b;
cin>>a>>b;
vector<int> ar;
vector<int> ar2;
for(int i=0;i<a;i++)
{
    int x;
    cin>>x;
    ar.pb(x);
    ar2.pb(x);
}
sort(all(ar));
if(ar[a-1]*a<b)
{
  cout<<"infinite";
}
else{
  int sum=0;
  int j=1;
  while(1)
 { 
  for(int i=0;i<a;i++)
  {
sum+=min(ar2[i],j);
  }
  if(sum<b)
  {
      j++;
    sum=0;
  }
  else{
    j--;
      break;
  }

}
 cout<<j;

}
}