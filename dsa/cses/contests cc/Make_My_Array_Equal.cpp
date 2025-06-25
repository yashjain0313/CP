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
    int s;
    cin>>s;
    v1.push_back(s);
    v2.push_back(s);

} 
sort(v2.begin(),v2.end());
if(v2[0]==v2[a-1])
{
    cout<<"YES"<<endl;
}
else{
      map<int, int> mp;
        for (int num : v1) {
            mp[num]++;
        }
        vector<int> r;
        for (const auto& entry : mp) {
                r.push_back(entry.first);
        }
        int n=r.size();
        sort(r.begin(),r.end());
        if(r[0]==0 && n==2)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
  


}



   

 
}
}
            
