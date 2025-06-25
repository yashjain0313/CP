#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mp make_pair
#define pb push_back
#define ull unsigned long long
#define double long double

signed main()
{
    int a;
    cin >> a;
    while (a--)
    {
        string a;
        string b;
        cin >> a >> b;
        int n = a.size();
        int m = b.size();
        int s = min(n, m);
        int t = max(n, m);
        int ctr = 0;
        
        for (int i = 0; i < s; i++)
        {
            
            if (a[i] != b[i])
            {
                ctr += ((n-i) + (m-i));
                break;
            }
            else
            {   if(ctr==0)
            {
                ctr++;
            }
                ctr++;
            }
        }
        
        if (s < t)
        {
            // cout<<s<<"  "<<t<<endl;
            ctr += (t - s);
        }

        cout << ctr << endl;
    }
}
