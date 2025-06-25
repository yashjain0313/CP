#include <bits/stdc++.h>

using namespace std;

signed main()
{
    ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
     long long n;
    cin>>n;
     long long a[n-1];
     long long sum2=0;
    long long x;
    for(long long  i=0;i<n-1;i++)
    {       cin>>x;
            a[i]=x;
            sum2+=a[i];

    }
 cout<<(n*(n+1))/2-sum2;
   


    
}
