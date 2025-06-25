#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mp make_pair
#define pb push_back
#define ull unsigned long long
#define double long double
int M = 1e9 + 7;
int ctr = 0;


// int maxw(vector<int> v1,int n)
// {
    
//     int dp[n+1][n+1];
//     for(int i=0;i<=n;i++)
//     {
//        dp[i][0]=0;
//     }
//     for(int i=0;i<=n;i++)
//     {
//         dp[0][i]=0;
//     }
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(v1[i-1]<=j)
//             {
//                 dp[i][j]=max(dp[i-1][j],dp[i-1][j-v1[i-1]]+v1[i-1]);
//             }
//             else
//             {
//                 dp[i][j]=dp[i-1][j];
//         }
//     }

//   for (int i = 0; i < n + 1; i++)
//     {
//         for (int j = 0; j < n + 1; j++)
//         {
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }
//     }
//  return dp[n][n];
// }


signed main()
{
    int n;
    cin>>n;
    vector<int> v1;
   for(int i=0;i<n;i++)
   {
         int x;
         cin>>x;
         v1.push_back(x);
   }
   int ans=0;

    for(int i=n-1;i>0;i--)
    {   int j=0;
        int ls=v1[i];
        if(ls>=v1[j])
        {   
            ans=max(ans,i-j);
            j++;
            cout<<ans<<" ";
        }
    
        
    }
    cout<<ans;
   
}
