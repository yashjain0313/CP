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
        long long a;
        cin>>a;
        vector<long long>v1;
        vector<long long>v2;
        for(long long i=0;i<a;i++)
        {   long long x;
        cin>>x;
           v1.push_back(x);
           v2.push_back(x);
        }
        if(a==2)
        {
            cout<<v1[0]+v1[1]<<endl;
        }
        else

       { long long sum=0;
        sort(v2.begin(),v2.end());
        sum+=v1[a-1];
        
        for(long long i=a-1;i>=0;i--)
        {
            if(v1[a-1]==v2[i]&& (a-1)==i)
            {
                continue;
            }
            else
            {
                sum+=v2[i];
                break;
            }
        }
        cout<<sum<<endl;
        

        
      
        

}
    }
   

}
        




    
    




   
       
    
   
   


    

