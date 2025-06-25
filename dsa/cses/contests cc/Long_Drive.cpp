#include <bits/stdc++.h>
using namespace std;

signed main() {
     ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
long long t;
cin>>t;
while(t--)
{
    long long a,b;
    cin>>a>>b;
    for(long long i=1;i<=1225;i++)
    {
        long long x=(a*10+i*100)/(10+i);
        
        if(x>=b)
        {cout<<i<<endl;
            break;
        }
    }
    
    
}

}
