#include <bits/stdc++.h>
using namespace std;

signed main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  long long a;
  cin >> a;
  while (a--)
  {
    long long n, f, k;
    cin >> n >> f >> k;
    vector<long long> v1;
    for (long long i = 0; i < n; i++)
    {
      long long x;
      cin >> x;
      v1.push_back(x);
    }

    long long fav = v1[f - 1];

    sort(v1.begin(), v1.end(), greater<long long>());
    long long cnm = 1;
    long long ind = 0;
    long long cnnt = 0;
    for (long long i = 0; i < v1.size(); i++)
    {
      if (v1[i] == fav)
      {
        if (cnm == 1)
        {
          ind = i;
          cnm = 0;
          cnnt++;
        }
        else
        {
          cnnt++;
        }
      }
    }
    cnnt = cnnt + ind;

    long long ctr = 2;

    if (k > ind && k < cnnt)
    {
      cout << "MAYBE" << endl;
    }
    else if (k > ind)
    {
      cout << "YES" << endl;
    }
    else
      cout << "NO" << endl;
  }
  return 0;
}
