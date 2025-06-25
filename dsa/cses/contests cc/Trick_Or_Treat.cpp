#include <bits/stdc++.h>
using namespace std;

signed main() {
    long long n;
    cin >> n;
    
    while (n--) {
        long long a,b;
        cin >> a>>b;
        vector<int>v1;
        vector<int>v2;
        int ctr=0;
        for(int i=0;i<a;i++)
        {
            int x;cin>>x;
            v1.push_back(x);
        }
         for(int i=0;i<a;i++)
        {
            int x;cin>>x;
            v2.push_back(x);
        }
         for(int i=0;i<a;i++)
        {
            for(int j=0;j<a;j++)
            {
                if((v1[i]+v2[j])%b==0)
                {
                    ctr++;

                }
            }
        }
        cout<<ctr<<endl;

        
      
       }
      


        

 return 0;
}