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
    int N,k;
    cin>>N>>k;
    int n=N;
    int total=k;
    int ctr=0;
    int lastn=0;
    for(int i=1;i<INF;i++)
    {   if(i==1)
        {total-=n;
        n--;
        ctr++;}
        else{
            total-=2*n;
            n--;
            ctr+=2;
        }
        if(total<=0)
        {   
        lastn=n;
            break;
        }
    }
    if(abs(total)>lastn)
    {
        ctr--;
        cout<<ctr<<endl;
    }
    else{
 cout<<ctr<<endl;
    }     



}

}
