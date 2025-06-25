#include <bits/stdc++.h>
using namespace std ;
#define int long long
const int MOD =1e9+7;
const int INF= LLONG_MAX>>1;
//godyash
signed main()
{
ios::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;
string ab="abcdefghijklmnopqrstuvwxyz";
while(t--)
{
 int ctr=0;
    string s;
    cin>>s;
    int n=s.length();
    if(n==1)
    {
        for(int i=0;i<26;i++)
        {
            if(ab[i]!=s[0])
            {    ctr++;
                cout<<ab[i]<<s;
                break;
            }

        }
    }
    else{
       
        for(int i=1;i<=n;i++)
        {

            if(s[i-1]==s[i])
            {   ctr++;
                for(int j=0;j<=i-1;j++)
                {
                        cout<<s[j];
                }
                 for(int j=0;j<26;j++)
        {
            if(ab[j]!=s[i])
            {
                cout<<ab[j];
                break;
            }

        }
        for(int j=i;j<n;j++)
                {
                        cout<<s[j];
                }
                break;
            }
          
        }
       
    }
    if(ctr==0)
            {
                cout<<s;
                   for(int j=0;j<26;j++)
        {
            if(ab[j]!=s[n-1])
            {
                cout<<ab[j];
                break;
            }

}
            

}  cout<<endl;
}
}