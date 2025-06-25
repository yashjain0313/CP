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
        long double n,l,r;
        cin>>n>>l>>r;
        vector<long long>v1;
        for(long long i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            v1.push_back(x);
        }
        
        long long temp=0;
         long long ans=0;
            // long long df=r-l;
            long long sum=0;
            for(long long i=0;i<n;i++){
           sum+=v1[i];
             if(sum>r)
           {
            sum=0;
            continue;
           }
           if(v1[i]>=l&&v1[i]<=r)
           {
            ans++;
            sum=0;
           }
         
           if(sum>=l && sum<=r)
           {
            sum=0;
            ans++;
           }
        }
        cout<<ans<<endl;
}

     
       




        }
        
        
           
            
            
        
        
        

       
      
    

    

