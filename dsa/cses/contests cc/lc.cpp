#include <bits/stdc++.h>
using namespace std ;
#define int long long
const int MOD =1e9+7;
const int INF= LLONG_MAX>>1;
string getBinary(int n) {
bitset<16> b(n);
return b.to_string();
}
signed main()
{
int n,k;
cin>>n>>k;
int change=0;
string s1=getBinary(n);
string s2=getBinary(k);
//  cout<<s1<<endl<<s2<<endl;
for(int i=0;i<32;i++)
{
    int nbit=(n>>i)&1;
    int kbit=(k>>i)&1;
    // cout<<nbit<<" "<<kbit<<endl;
    if(nbit==0 && kbit==1)
    {cout<<-1;
    break;}
    else{
        change+=(nbit!=kbit);
    }
}
cout<<change;

}
