#include <bits/stdc++.h>
using namespace std;
#define fr(i, n) for (int i = 0; i < (n); i++)
#define endl '\n'
#define int long long

void solve()
{
    int n, ones = 0, twos = 0;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 1)
            ones++;
        else
            twos++;
    }

    if (ones % 2 == 0)
    {
        ones = ones / 2;
        if (ones < twos)
            cout << ones << endl;
        else
            cout << twos << endl;
    }
    else
    {
        cout << twos << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
