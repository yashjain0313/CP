#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mp make_pair
#define pb push_back
#define ull unsigned long long
#define double long double
void calculateSubordinates(int node, vector<vector<int > > &v1, vector<int> &v2) {
    v2[node] = 1;
    for (auto &v : v1[node]) {
        calculateSubordinates(v, v1, v2);
        v2[node] += v2[v];
    }
}
signed main()
{
    int n;
    cin >> n;
    vector<vector<int> > v1(n + 1);
    vector<int> v2(n + 1);
    for(int i=2;i<n+1;i++)
    {
        int x;
        cin>>x;
        v1[x].pb(i);
    }


calculateSubordinates(1, v1, v2);
for(int i=1;i<n+1;i++)
{
    cout<<v2[i]-1<<" ";
}


}
