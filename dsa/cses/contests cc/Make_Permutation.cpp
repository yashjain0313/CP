#include <bits/stdc++.h>
using namespace std;

signed main() {
    long long n;
    cin >> n;
    
    while (n--) {
        long long a;
        cin >> a;
        
        vector<long long> v1(a);
        for (long long i = 0; i < a; i++) {
            cin >> v1[i];
        }
        
       unordered_map<long long, long long> mp;
        for (long long num : v1) {
            mp[num]++;
        }
        
        vector<long long> r;
        vector<long long> rest;
        for (const auto & entry : mp) {
            if (entry.second >= 1) {
                r.push_back(entry.first);
            }
//            
        }
        long long ctr=0;
        long long cmr=0;
        sort(v1.begin(),v1.end());
       for(long long i =0,j=1;i<v1.size();i++)
       {
       if(v1[i]==j)
       {j++;
       ctr=0;
        continue;
       }else{
        ctr=1;
        
       }
       }
       if(ctr==0)
       {
        cout<<"YES"<<endl;
       }
       else
       {
        cout<<"NO"<<endl;
       }

       }
      


        // long long x=r.size();
        // if(r.size()==a)
        // {
        //     cout<<"YES"<<endl;
        // }
        //  else if (cmr>1) {
        //     cout << "NO" << endl;
        // } 
        // else if (ctr==0 && a!=1) {
        //     cout << "NO" << endl;
        // } else {
        //     cout << "YES" << endl;
        // }
    
      
   
   

 return 0;
}