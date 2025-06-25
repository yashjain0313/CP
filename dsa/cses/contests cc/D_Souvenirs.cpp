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
  vector<long long>v2;
  for(long long i=0;i<t;i++)
  {
    long long x;cin>>x;
    v1.push_back(x);
  }
   for(long long i=0;i<a;i++)
  {
    long long x;cin>>x;
    v2.push_back(x);
  }
  sort(v1.begin(),v1.end());
  sort(v2.begin(),v2.end());
  long long sum=0;
  int temp=0;
  for(long long i=0,j=0;i<v1.size()&&j<v2.size();i++)
{
    if(v2[j]<=v1[i])
    {   sum+=v1[i];
         j++;
    }
  temp=j;
}


if(sum== 0|| temp!=a)
cout<<-1;
else
cout<<sum;


 
 

}
        




    
    




   
       
    
   
   


    

