#include <bits/stdc++.h>
using namespace std ;
#define int long long
const int MOD =1e9+7;
const int INF= LLONG_MAX>>1;
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
   int a;
   cin>>a;
   vector<int>v1;
   vector<int>v2;
   for(int i=0;i<a;i++)
   {
    int x;
    cin>>x;
     v1.push_back(x);
   }
   int mx=0;
for(int i=0;i<a;i+=2){
        mx = max(mx , v1[i]);
    }

   cout<<mx<<endl;



   }
 

    return 0;
}
   
    

   

    




