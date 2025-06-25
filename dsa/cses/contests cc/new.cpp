#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define mp make_pair
#define pb push_back
#define ull unsigned long long
#define double long double
int M = 1e9 + 7;

signed main(){
    int t;
    cin>>t;
    while(t--){
       int n,x;
       cin>>n>>x;
       vector<int> vc(n);
       map<int,int> mp;
       map<int,int> mp1;
       for(auto &it : vc){
        cin>>it;
        mp1[it]++;
       }
       int cnt=0;
       while(1)
      { if(mp1[cnt]>0)
       {
        mp1[cnt]--;
        int c=mp1[cnt];
        mp[cnt%x]+=c;
        cnt++;
       
       }
       else if (mp[cnt%x]>0)
       {
        mp[cnt%x]--;
        cnt++;
       }
       else
       {
        break;
       }
       }
         cout<<cnt<<endl;
    }

}
  







 












