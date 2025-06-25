#include <bits/stdc++.h>

using namespace std;
//godyash
signed main()
{
    ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
    
   char t;
   cin>>t;
   if(t>='A'&&t<='Z')
   {
        cout<<((char)(t+32));
   }
   else
   cout<<((char)(t-32));
  
}

//char uppercase and lower casew
//for char to int '6'-'0';