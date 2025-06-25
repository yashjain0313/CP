#include <bits/stdc++.h>
#include <vector>
using namespace std;


signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long t;
    cin >> t;
    while (t--) {
      long long a;
      cin>>a;
      if(a==1||a==2)
      {
        cout<<0<<endl;
      }
      else 
      {long long ty=log2(a);
        long long sum=0;
        long long ans=pow(2,ty);
        while(ans<a)
        {   ans+=2;
        sum+=4;

        }
      cout<<sum<<endl;
        









      }

       

       
    }
    return 0;
}
     
        
        
           
            
            
        
        
        

       
      
    

    

