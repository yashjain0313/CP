#include <bits/stdc++.h>

using namespace std;
//godyash
signed main()
{
    ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
    long long n;cin>>n;
    long long s;cin>>s;
    long long a;cin>>a;
    long long l;cin>>l;
  
   

    //  if(n==a)
    //  {
    //     cout<<abs(n-l);
    //  }
    // else if (s==l)
    // {
    //     if(s%2==0)
    //     {long long ms=max(n,a);
    //     long long min=n+a-ms;
    //     ms=ceil(ms/2.0);
    //     min=ceil(min/2.0);
    //     cout<<ms-min-1;}
    //     else
    //     {
    //     long long ms=max(n,a);
    //     long long min=n+a-ms;
    //     ms=ceil(ms/2.0);
    //     min=ceil(min/2.0);
    //     cout<<ms-min;
    //     }

    //  }
    //  else  if((abs(n-a))<=(abs(s-l)))
    // {
    //     cout<<abs(s-l);
    // }
    // else 
    // {
    //     cout<<abs(n-a);

    // }
    if((abs(n-a))<(abs(s-l)))
    {
        cout<<abs(s-l);
    }
   else if (s==l)
    {
        if(s%2==0||s==0)
        {long long ms=max(n,a);
        long long min=n+a-ms;
        ms=ceil(ms/2.0);
        min=ceil(min/2.0);
        cout<<abs(ms-min);
        }
        else
        {
        long long ms=max(n,a);
        long long min=n+a-ms;
        ms=ceil(ms/2.0);
        min=ceil(min/2.0);
        cout<<abs(ms-min);
        }}
        else if (n==a)
        {
            cout<<abs(s-l);
        }
    else
    {    if(s%2==0||s==0)
        {long long ms=max(n,a);
        long long min=n+a-ms;
        ms=ceil(ms/2.0);
        min=ceil(min/2.0);
        cout<<abs(ms-min)+(abs(s-l)/2);
        }
        else if (s%2!=0)
        {
        long long ms=max(n,a);
        long long min=n+a-ms;
        ms=ceil(ms/2.0);
        min=ceil(min/2.0);
        cout<<abs(s-l)+abs((abs(s-l)-abs(n-a)))/2;
        }
        // long long ds=n-a;
        // ds=abs(n-a)-abs(s-l);
        // long long ans=ds+abs(s-l);
        // cout<<ans;
    }
   
}
    
   

        




    
    




   
       
    
   
   


    

