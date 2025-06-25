#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mp make_pair
#define pb push_back
#define ull unsigned long long
#define double long double
int M = 1e9 + 7;
int ctr = 0;

string lcs(string a, string b)
{
    string str = "";
    int n = a.size();
    int m = b.size();
    // initializing the dp array
    string dp[n + 1][m + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            dp[i][j] = "";
        }
    }
    // filling the dp array
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                // for number
                //   dp[i][j] =  dp[i - 1][j - 1]+ 1;

                dp[i][j] = dp[i - 1][j - 1] + a[i - 1];
                str = str.size() > dp[i][j].size() ? str : dp[i][j];
            }
            else
            {
                dp[i][j] = "";
            }
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return str;
}

signed main()
{
    string a, b;
    cin >> a >> b;
    cout << lcs(a, b) << endl;
    // cout << ctr << endl;
}
