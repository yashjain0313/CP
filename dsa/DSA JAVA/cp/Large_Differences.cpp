#include <bits/stdc++.h>
using namespace std;

signed main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  long long t;
  cin>>t;
  while(t--)
  {
    long long a,k;
    cin>>a>>k;
    vector<long long>v1;
    for(long long i=0;i<a;i++)
    {
        long long x;
        cin>>x;
        v1.push_back(x);
    }
    // int y = min_element(v1.begin(), v1.end()) - v1.begin();
     vector<long long>v2;
    //  long long y=a/2;

for(int ii=1;ii<a;ii++)
   { int temp=v1[ii];
   long long nm=0;
    for(long long i=1;i<=k;i++)
     { 
        v1[ii]=i;
            nm=0;
        for(long long l=0,j=1;l<a-1;l++)
    {   nm+=abs(v1[l]-v1[j]);
            j++;
     }
     v1[ii]=temp;
     v2.push_back(nm);
      
    
     }
     
     }
     

 
     cout<<*max_element (v2.begin(), v2.end())<<"\n";
   
    


    



  }
  
 
  return 0;
}
