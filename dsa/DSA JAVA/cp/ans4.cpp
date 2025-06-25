#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll mod =pow(10,9)+7;
int t;
cin>>t;
while(t--)
{
    ll a;
    cin>>a;
    ll ar[a];
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
    }
   
   sort(ar,ar+a);
    ll s =0;
   for(int i=0;i<a;i++)
    {
        if(ar[i]*s<ar[i]+s){
        s+=ar[i];s=s%mod;
    }
    else{s*=ar[i]; 
        s=s%mod;
    }
    }
    

cout<<s<<endl;
}

}
