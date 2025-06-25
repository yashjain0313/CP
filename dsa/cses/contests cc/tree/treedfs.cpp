#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mp make_pair
#define pb push_back
#define ull unsigned long long
#define double long double
int p = 0;

//FOR LEVEL ORDER TRAVERSAL
// void dfs(int node, int parent,int height, int level, vector<vector<int> > &v1)
// {        
     
//     cout << node << " " << level << " " << height << endl;

//     for (auto &v : v1[node])
//     {
//         if (v != parent)
//             dfs(v, node, height,level + 1, v1);
//     }
// }

//FOR HEIGHT OF TREE
int dfs(int node, int parent, vector<vector<int> > &v1)
{       
     
        int height = 0;
    
    for (auto &v : v1[node])
    {
        if (v != parent)
           height=max(dfs(v, node, v1)+1,height);
    }
    cout << node << " " <<height<< " " <<endl;
    return height;
}
signed main()
{
    int n;
    cin >> n;
    vector<vector<int> > v1(n + 1);
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        v1[x].pb(y);
        v1[y].pb(x);
    }

    for (int i = 1; i < n - 1; i++)
    {
        cout << "NEIGHBOURS OF " << i << " : ";
        for (int j = 0; j < v1[i].size(); j++)
        {
            cout << v1[i][j] << " ";
        }
        cout << "\n";
    }
    // dfs(1, -1, 0, v1);
    dfs(1, -1, v1);
    // cout<<endl;
    // dfs
    //
}
