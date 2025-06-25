#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mp make_pair
#define pb push_back
#define ull unsigned long long
#define double long double
int M = 1e9 + 7;


int lcs(string a, string b)
{
    int n = a.size();
    int m = b.size();
    // initializing the dp array
    int dp[n + 1][m + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            dp[i][j] = 0;
        }
    }
    // filling the dp array
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
               
            }
        }
    }

    return dp[n][m];
}
signed main()
{
    string a, b;
    cin >> a >> b;
    cout << lcs(a, b) << endl;
    
}
