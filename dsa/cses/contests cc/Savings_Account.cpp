#include <bits/stdc++.h>
using namespace std ;
#define int long long
const int MOD =1e9+7;
const int INF= LLONG_MAX>>1;
//godyash
signed main()
{
ios::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;
while(t--)
{
    int a,b,c;
    cin>>a>>b>>c;
    int p=a*b;
    if(p<=c)
    {
        cout<<0<<endl;
    }
    else{
        int ans=p-c;
        int ctr=0;
        while(p>c)
        {ctr++;
        p-=b;
        }
        cout<<ctr<<endl;

    }
}


}
