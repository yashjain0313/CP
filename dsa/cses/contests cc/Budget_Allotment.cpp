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
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    for(int i=0;i<a;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    int ctr=0;
    int sum=0;
     for(int i=0;i<a;i++)
    {
       if(v1[i]> b)
        {
            sum+=(v1[i]-b);
            ctr++;
        }
        else if(v1[i]<b)
        {
            v3.push_back(b-v1[i]);
        }
        else
        {
            ctr++;
        }
    }
    sort(v3.begin(),v3.end());
     for(int i=0;i<v3.size();i++)
    {       
        if(sum>0)
        {   ctr++;
             sum-=v3[i];
             if(sum<0)
             {
                ctr--;
                break;
             }
         }

    }
    cout<<ctr<<endl;



    

   

    }
}



