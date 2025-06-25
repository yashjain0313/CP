#include <bits/stdc++.h>
using namespace std;

signed main() {
    long long n;
    cin >> n;
    
    while (n--) {
        string a,b;
        cin >> a>>b;
       vector<char>v1;
        long long x=0;
        long long bb=b.length();
        long long aa=a.length();
        long long ctr=0;
        long long cmr=0;
        long long ans=aa;
       
            for(long long j=0;j<bb;j++)
            {
               x=a.find(b[j]); 
            //    cout<<x<<endl;
               if(x<0)
               {
                    ctr++;
               }
               else{
                cmr++;
               }
        }
        if(cmr==bb && bb>aa)
        {
            cout<<bb<<endl;
        }
        else
       { cout<<ans+ctr<<endl;}
 





       
       


        
    }
 return 0;
}