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
   int a,b;
   cin>>a>>b;
        vector<vector<char> >  v1(a, vector<char>(a));
        vector<long long> v2; 
        vector<long long> v3; 
        long long ctr=0;
        for(long long i=0;i<a;i++)
        {
            for(long long j=0;j<a;j++)
            {
               cin>> v1[i][j];
               
            }
        }
       
        
             for(long long i=0;i<a;i+=b)
        {
            for(long long j=0;j<a;j+=b)
            {
               cout<< v1[i][j];
               
            }
            cout<<endl;
        }
       

    }
   
    

   

    }




