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
    int a,d;
    cin>>a>>d;
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i<a;i++)
{
    int s;
    cin>>s;
    v1.push_back(s);
} 
int ctr=0;
int ms=d;
int gun=0;
 for(int i=0;i<a;i++)
{
    if(v1[i]>ms && gun==0)
    {
       ctr++;
       gun=1;
       continue;
    }
    else if(v1[i]<=d && gun==1)
    {
       ctr++;
       gun=0;
    }

} 
cout<<ctr<<endl;

 
}
}
            
