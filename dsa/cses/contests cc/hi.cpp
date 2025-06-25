#include <bits/stdc++.h>
#include <vector>

using namespace std;
bool isPrime(long long n)
{
    
    if (n <= 1)
        return false;
    for (long long i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

signed main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
      long long t;
    cin >> t;
    while(t--)
    {
vector<long long>v1;
    long long n;
    cin >> n;
    n=n-4;
    long long ans2=n;
   long long hw=sqrt(n);
   for(long long i=hw;i>=3;i--)
   {   if(isPrime(i))
            {
                v1.push_back(i);
                n-=(i*i);
                break;
            }

   
   }
    hw=sqrt(n);
    

     for(long long i=hw;i>=1;i--)
   {   if(isPrime(i))
            {
                v1.push_back(i);
                n=n-(i*i);
                break;
            }

 
   }
   hw=sqrt(n);
 
   long long ans=0;
   for(long long i=0;i<v1.size();i++)
   {
    ans+=v1[i]*v1[i];
   }
      for(long long i=0;i<v1.size();i++)
   {
    cout<<v1[i]<<endl;
   }

if(ans2==ans)
{
    cout<<"Yes"<<endl;
}
else
{
    cout<<"No"<<endl;
}
 

   


    }
    
        

    return 0;
}
