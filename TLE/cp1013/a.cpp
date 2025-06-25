
#include <bits/stdc++.h>
using namespace std;
#define fr(i, n) for (int i = 0; i < (n); i++)
#define numin(a, n)               \
    for (int i = 0; i < (n); i++) \
        cin >> a[i];
#define printv(k)         \
    for (auto &i : k)     \
        cout << i << " "; \
    cout << endl;
#define printmp(k)    \
    for (auto &i : k) \
        cout << i.first << " " << i.second << endl;
#define pb push_back
#define all(x) x.begin(), x.end()
#define int long long
#define inf (1LL << 60)
#define endl '\n'
#define nl cout << endl;
const int mod = 1000000007;
const int mod2 = 998244353;
// priority_queue <pair <int , int> , vector <pair <int , int>> , greater <pair <int , int>>> pq;
string getBinary(int n)
{
    bitset<64> b(n);
    return b.to_string();
}

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        int ans = 1;
        int one = 1;
        int zero = 3;
        int two = 2;
        int three = 1;
        int five = 1;

        int a;
        cin >> a;
        vector<int> v1(a);
        numin( v1,a); 
        for (int i = 0; i < a; i++)
        {
            if (v1[i] == 1)
              {  one--;}
            else if (v1[i] == 2)
              {  two--;}
            else if (v1[i] == 3)
               { three--;}
            else if (v1[i] == 0)
                {zero--;}
            else if (v1[i] == 5)
              {  five--;}
            else
            {
            }
            if (one <= 0 && zero <= 0 && two <= 0 && three <= 0 && five <= 0)
            {
                cout << i + 1 << endl; 
                ans = 0;
                break;
            }
        }
        if (ans)
        {
            cout << 0<< endl;
        } // If no solution found
    }
}