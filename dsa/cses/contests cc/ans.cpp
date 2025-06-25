#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)

    {
      int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int len = 1;
    int i = 1;
    int ans = 0;
    while (i < n)
    {
    
        if (v[i] == v[i - 1])
            len++;
        else
        {
            ans += (len * (len + 1)) / 2;
            len = 1;
        }
        i++;
    }
    ans += (len * (len + 1)) / 2;

    cout << ans << endl;


       





    }
}