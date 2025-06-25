#include <bits/stdc++.h>
using namespace std;
#define fr(i, n) for (int i = 0; i < (n); i++)
#define endl '\n'
#define int long long
#define arrin(a, n)             \
    for (int i = 0; i < n; i++) \
        cin >> a[i];

void solve()
{
    int n;
    cin >> n;
    int a[n];
    arrin(a, n);
    int ans = a[0];
    for (int i = 1; i < n; i++)
    {
        // cout << ans << " " << i << " " << a[i] + 1 << endl;
        ans = min(ans, max(a[i] + 1, i));
    }
    cout << ans << '\n';
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
