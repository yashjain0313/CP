#include <bits/stdc++.h>

using namespace std;
//godyash


long fact(long long n)
{
      if(n==0)
      return 1;
    long res = 1;
    for (long long i = 2; i <= n; i++)
        res = res * i;
    return res;
}

signed main()
{
    ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
    long long n;cin>>n;
    long long r=2;
    long long odd=3;
    for(long long i=1;i<=n;i++)
    {
       
      
           long long ans=0;
            long long blk=i*i;
           ans=(blk*(blk-1))/2;
           ans=ans-(pow(odd,2)-1);
           odd+=2;
           cout<<ans<<"\n";






        }





    }
    




   
       
    
   
   


    

