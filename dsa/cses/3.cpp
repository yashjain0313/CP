#include <bits/stdc++.h>

using namespace std;

signed main()
{
    ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
     string s;
    cin>>s;
    long long mx=0;
    long long mmx=0;
    long long u=INT32_MAX;
     for(long long i=0;i<s.length();i++) 
     {
            if(s[i]==s[i-1])
            {
                mx+=1;
            }
            else
            {
                mx=0;
            }

        
mmx=max(mx,mmx);
     }  
     
     cout<<mmx+1;


    
}
