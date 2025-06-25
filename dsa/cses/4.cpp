#include <bits/stdc++.h>

using namespace std;
//godyash
signed main()
{
    ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
    long long n;cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long sum=0;
    for(long long i=1;i<n;i++)
    { 
        if(a[i]<a[i-1])
    {
           sum+=a[i-1]-a[i];
        
           a[i]=a[i-1];
    }
   

    }
    cout<<sum;
   


    
}
