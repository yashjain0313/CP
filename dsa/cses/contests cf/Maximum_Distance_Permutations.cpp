#include <bits/stdc++.h>
using namespace std;
 
#define ll           long long
#define endl         '\n'
#define fwd(i,a,b)   for(ll i=a; i<b; i++)
#define bwd(i,a,b)   for(ll i=a; i>=b; i--)
 

   
int main () 
{
    int n;
    vector<int>v1;
    vector<int>v2;
    cin>>n;
    for(int i=0;i<7;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    sort(v1.begin(),v1.end());
    if(n==2)
    {
        cout<<v1[0]-v1[v1.size()-1];

    }
    else
    {
        v2.push_back(v1[0]);
        v2.push_back(v1[v1.size()-1]);
        n-=2;
        while(n--)
        {
            int mid=ceil(v1.size()/2.0);
            

        }
        
        

      

        







    }
}

