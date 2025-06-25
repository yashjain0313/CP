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

int a,b;
cin>>a>>b;
int max=0;
int min=0;
if(a>b)
{
    max=a;
    min=b;
}
else if (a==b){
    cout<<a<<endl;
    return 0;
}
else{
    max=b;
    min=a;
}

for(int i=1;i<=min;i++)
{ if(max*i%min==0)
{
    cout<<max*i<<endl;
    return 0;
}
}
   

 
}

            
