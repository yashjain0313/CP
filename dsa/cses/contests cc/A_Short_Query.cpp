#include <bits/stdc++.h>
using namespace std ;
#define int long long
const int MOD =1e9+7;
const int INF= LLONG_MAX>>1;

signed main()
{
ios::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    vector<int>v1;
    int odd=0;
    int eve=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
}
 for(int i=0;i<n;i++)
    {
      if(v1[i]&1)
      {
        odd++;
      }
      else
      {eve++;}
}
int len=n;
while(k--)
{
     if(eve>=2)
     {  len--;
        eve--;
        continue;
     }
     if(odd>=2)
     {
         len--;
        odd-=2;
        eve++;
        continue;
     }
}
cout<<len<<endl;






}
}




