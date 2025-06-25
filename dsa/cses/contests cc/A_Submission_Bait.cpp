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
    int a;
    cin>>a;
    vector<int>v1;
    for(int i=0;i<a;i++)
    {
int x;cin>>x;
v1.push_back(x);
    }

     sort(v1.begin(),v1.end());
        unordered_map<int, int> mp;
        for (int num : v1) {
            mp[num]++;
        }
        vector<int> r;
        for (const auto& entry : mp) {
           r.push_back(entry.second);
        }
            int ctr=0;
            int alc=0;
        for(int i=r.size()-1;i>=0;i--)
    {
               if(r[i]%2!=0)
               {alc=1;
              break;
               }
         
    }
    if(alc==1)
    {
            cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}
cout<<endl;
}
        
//     sort(v1.begin(),v1.end());
//     int mx=v1[a-1];
//     int al=1;
//     int bob=0;
//     vector<int>v2;

//      for(int i=a-1;i>0;i--)
//     {   if(v1[i]==mx)
//     {
//              v2.push_back(1);
//     }
//     else
//     {       


//     }
//     if(ctr%2==0)
// }

