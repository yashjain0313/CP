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
    int a;
    cin>>a;
    if(a==2)
    {
        cout<<1<<endl;
    }
    else if(a%4==0){
        cout<<a/4<<endl;
      
    }
    else{
        cout<<(a/4)+1<<endl;
    }
   
    

   

    }
}



