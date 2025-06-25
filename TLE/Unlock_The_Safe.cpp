
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

void solve()
{

    int a,b;
    cin>>a>>b;
    vector<int>v(a);
    vector<int>t(a);
    numin(v,a);
    numin(t,a);

    int dif=0;
    for(int i =0;i<a;i++)
    {
        if(v[i]!=t[i])
        {
            dif++;
        }
    }

            int d=0;

        for(int i =0;i<a;i++)
        {   int c=0;
            if(v[i]!=t[i])
            {
                c=abs(v[i]-t[i]);     
                // if(c==9) {c=1;}
                // if(c==8) {c=2;}
                // if(c==7) {c=3;}
                // if(c==6) {c=4;}
                
                d+=c;
            }
        }

        cout<<d<<" " <<b<<" ";
        if(d==b ||  ||( d==0 && b!=1))
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }


    



    

}

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
}