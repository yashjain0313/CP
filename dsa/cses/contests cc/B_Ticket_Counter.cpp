#include <bits/stdc++.h>

using namespace std;
//godyash
signed main()
{
    ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
    
   long long t,a;
   cin>>t>>a;
   vector<long long>v1;
   for(long long i=0;i<t;i++)
   {  long long x;
   cin>>x;
   v1.push_back(x);
   }
    v1[0]+=a;
   for(long long i=1;i<v1.size();i++)
   {
    if(v1[i]<v1[i-1])
    {
        v1[i]=v1[i-1]+a;
    }
    else
    {
        v1[i]+=a;
    }
   
   }
   for(long long i=0;i<v1.size();i++)
   {
    cout<<v1[i]<<endl;
   }
   
}
        




    
    




   
       
    
   
   


    

