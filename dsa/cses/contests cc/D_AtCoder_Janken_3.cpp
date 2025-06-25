#include <bits/stdc++.h>
using namespace std ;
#define int long long
#define frin(a,b,c)
#define fr(i,n) for(int i= 0; i<(n); i++) 
#define vin(a,n)  for(int i=0;i<(n);i++){ cin>>a[i];}
#define vout(a,n)  for(int i=0;i<(n);i++){ cout<<a[i];}
#define printv(k) for(auto& i:k) cout<<i<<" "; cout<<endl;
#define printmp(k) for(auto& i:k) cout<<i.first<<" "<<i.second<<endl;
#define pb push_back
#define all(x)  x.begin(), x.end()
const int MOD =1e9+7;
const int INF= LLONG_MAX>>1;
int summm=0;
//godyash

signed main()
{
ios::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);
int a;
cin>>a;
string s;
cin>>s;
int n=s.length();
vector<char> ar;
int ctr=0;
for(int i=1;i<a;i++)
{if(s[i-1]=='P' && s[i]=='P')
{
   if(s[i-2]!='S')
   {
    ctr++;
   }
    else if (s[i+1]=='S'||s[i+1]=='R'){
    ctr--;
   }
}
else if(s[i-1]=='S' && s[i]=='S')
{ 
   char ans='R';
   if(s[i-2]!=ans)
   {
    ctr++;
   }
    else if (s[i+1]=='P'||s[i+1]=='R'){
    ctr--;
   }
    continue;
}
else if(s[i-1]=='R' && s[i]=='R')
{
    if(s[i-2]=='P')
    {
        ctr++;}
    else if (s[i+1]=='S'||s[i+1]=='P')
    {ctr--;}
    
     continue;
    
}

ctr++;

}



cout<<ctr<<endl;


}


// SPRPSRRRRPPRPRPSSRSPRSS
// SPRPSPRPRS3RPRSR2RSPR1S