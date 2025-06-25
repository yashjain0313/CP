#include <bits/stdc++.h>
using namespace std;

signed main() {
   
   long long a;
   cin>>a;
   while(a--)
   {
    long long n,b,c;
    cin>>n>>b>>c;
   if(n&1)
   { long long sum=b;
    long long x=b*(n-1);
    long long y=(n-1)/2*c;
    cout<<max(x,y)+b<<endl;
   }
   else{
     long long x=b*n;
    long long y=c*(n)/2;
    cout<<max(x,y)<<endl;





   }





   }

    return 0;
}
