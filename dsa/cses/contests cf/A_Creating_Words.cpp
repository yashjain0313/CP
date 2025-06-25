#include <bits/stdc++.h>

using namespace std;
//godyash
signed main()
{
    ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
    long long n;cin>>n;
    vector<string>v1;
    vector<string>v2;
    for(long long i=0;i<n;i++)
    {
        string s,t;
        cin>>s>>t;
        v1.push_back(s);
        v2.push_back(t);
    
    }
   for(long long i=0;i<n;i++)
   {
         char temp= v1[i][0];
         v1[i][0]=v2[i][0];
    v2[i][0]=temp;

   }
   for(long long i=0;i<n;i++)
   {
    cout<<v1[i]<<" "<<v2[i]<<endl;
   }
 

    

   




        





    }
    




   
       
    
   
   


    

