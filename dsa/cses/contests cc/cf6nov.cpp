#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)

    {
        int n, x;
        int ans;
        cin >> n;
        cin >> x;
        vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v1.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v2.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            if (v1[i] > v2[i])
            {
                v3.push_back(0);
            }
            else if (v1[i] == v2[i])
            {
                v3.push_back(1);
            }
            else
            {
                v3.push_back(abs(v1[i] - v2[i]) + 1);
            }
        }
        // 3 2
        // 2 2 3
        // 1 3 2
        // 3 3
        // 3 1 5
        // 3 2 7

        sort(v3.begin(), v3.end());
        ans = 0;
        bool flag = false;
        for (int i = 0; i < v3.size(); i++)
        {
            // cout << v3[i] << " ";
            if (v3[i] == 0)
            {
                ans++
                        ;
                      
            }
            else
            {

                x -= v3[i];
                // cout << x  << endl;
                if (x < 0)
                {
                    flag = false;
                    break;
                }
                else
                {
                    ans++;
                }
            }
        }
if(n==1)
{
    if(ans==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
else

       { 
        if (ans >= (n / 2)+1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
}
        
    }

}