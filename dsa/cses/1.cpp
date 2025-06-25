#include <bits/stdc++.h>
using namespace std;

signed main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  long long t;
  cin>>t;
  cout<<t<<" ";
  while(t!=1)
  { if(t&1)
  {
    t=t*3+1;
    cout<<t<<" ";
  }
  else
  {
    t=t/2;
    cout<<t<<" ";
  }




  }

  
    
     
    



  
 
  return 0;
}
