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
int t;
cin>>t;
while(t--)
{
    string a,b;
    cin>>a>>b;
    int n=a.length();
    int m=b.length();
    if(m>n)
    {
        cout<<"NO"<<endl;
        continue;
    }
    else if (m==n){
        if(a==b)
        {
            cout<<"YES"<<endl;
            cout<<b<<endl;
        }
        else{
            int ctr=0;
           for(int i=0;i<n;i++)
           {
            if(a[i]=='?'||a[i]==b[i])
            {ctr++;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                break;
            }
           }
           if(ctr==m)
           {cout<<"YES"<<endl;
            cout<<b<<endl;
           }
        }

    }
    else{
        vector<char>v;
        // cout<<a<<" "<<b<<endl;
        int ctr=0;
        for(int i=0,j=0;i<m && j<n;j++)
        // {  cout<<b[i]<< endl;{}
       { if(b[i]==a[j]||a[j]=='?')
        {   ctr++;
            i++;
        }
      }
        // cout<<ctr;
        if(ctr==m)
        {
            cout<<"YES"<<endl;
           int x=n-m;
        //    cout<<x<<endl;
          int ctrs=0;
          int j=0;
          int mkc=0;
            for(int i=0;i<n;i++)
           {
               if(a[i]=='?'&& mkc==0)
               {
                //    cout<<b[j];
                   v.push_back(b[j]);
                   j++;
                   ctrs++;
                   if(j>m)
                   {v.pop_back();
                   v.push_back('a');
                    mkc=1;
                   }
               }
               else if(a[i]=='?')
               {
                   v.push_back('a');}
                   else{
                    //  cout<<a[i];
                     ctrs++;
                     v.push_back(a[i]);
               }
          }
        //   cout<<v.size();
         for(int i=0;i<v.size();i++)
         {  
             cout<<v[i];
            //  cout<<i<<" ";
         }
    
         
          


        //  for(int i=0;i<y;i++)
        //  {
        //     cout<<"a";
        //  }

            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       
    }
}

}