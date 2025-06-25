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
string ab="abcdefghijklmnopqrstuvwxyz";
while(t--)
{
    int a;
    cin>>a;
    vector<char>v1;
    vector<char>v2;
    for(int i=0;i<a;i++)
{
    char s;
    cin>>s;
    v1.push_back(s);

} 
 for(int i=0;i<a;i++)
{
    char s;
    cin>>s;
    v2.push_back(s);

} 
int ctr=0;
  for(int i=1;i<a-1;i++){
    if(v1[i] == '.' && v2[i] == '.')
{ 
     if(v1[i-1] == '.' && v1[i+1] == '.' && v2[i-1] == 'x' && v2[i+1] == 'x')
     {
        ctr++;
       }
            else if(v2[i-1] == '.' && v2[i+1] == '.' && v1[i-1] == 'x' && v1[i+1] == 'x')
            {
                ctr++;
            }
        }
    }
 

 
cout<<ctr<<endl;

}
}
            
