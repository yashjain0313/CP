#define arrin(a,n)  for(int i=0;i<(n);i++) cin>>a[i];
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
   int n;
    cin>>n;
    int a[n];
    arrin(a,n);
    int ans = 100000000000;
    for(int i=1;i<n;i++){
        ans = min(ans , max(a[i] , a[i-1])-1);
    }
    cout<<ans<<endl;
  
     


   
    


    



  }
  
 
  return 0;
}
