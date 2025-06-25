#include <bits/stdc++.h>
using namespace std;
 
#define ll           long long
#define endl         '\n'
#define fwd(i,a,b)   for(ll i=a; i<b; i++)
#define bwd(i,a,b)   for(ll i=a; i>=b; i--)
int dp[40];
int fc=0;
int helper(int n)
{   fc++;
    if(n==1 || n==2)
    {
        return 1;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    return dp[n]=helper(n-1)+helper(n-2);

}

signed main () 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
    int n;
     cin>>n;

for(int i=0;i<=n;i++)
{
    dp[i]=-1;
}
cout<<helper(n)<<endl<<fc;


    

      

        







    }


