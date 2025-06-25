#include <bits/stdc++.h>

using namespace std;
//godyash
signed main()
{
    ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
    long long n;cin>>n;
    while(n--)
    {  
        long long r,c;
        cin>>r>>c;
        if(r>c)
        { if(r&1)
        {  long long mx=(r-1)*(r-1)+c;
         
          cout<<mx<<"\n";
        }
        else
        {
          long long mx=r*r;
        long long ans = mx-c+1;
          cout<<ans<<"\n";
        }

        }
        else{
          if(c&1)
          {long long mx=c*c;
        long long ans = mx-r+1;
        cout<<ans<<"\n";
            
          }
           else
        { long long mx=(c-1)*(c-1)+r;
          
           cout<<mx<<"\n";
        }

        }
        
    
    
  
    } 
  
   
   
}

    

