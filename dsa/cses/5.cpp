#include <bits/stdc++.h>

using namespace std;
//godyash
signed main()
{
    ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
    long long n;cin>>n;
    int temp=1;
    int x=2;
    if(n==3||n==2)
    {
       cout<<" NO SOLUTION";
    }
  
else
{    

while(x<=n)
{
    cout<<x<<" ";
    x+=2;
}
while(temp<=n)
{
    cout<<temp<<" ";
    temp+=2;
}
    // 3 1 4 2
    // 1 3 2 4
    // 1 3 5 2 4
    
   
   
}

    
}
