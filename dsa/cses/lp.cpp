#include <bits/stdc++.h>

using namespace std;
//godyash
signed main()
{
    ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string s;
  cin>>s;
  for(int i=0;i<s.length();i++)
  {
        if(s[i]<=9)
        {   
             s.erase(s.begin() + i);
             s.erase(s.begin());
        }
  }

   


    
}
