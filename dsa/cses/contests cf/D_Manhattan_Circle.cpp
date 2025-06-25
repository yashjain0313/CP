#include <bits/stdc++.h>

using namespace std;
//godyash
signed main()
{
    ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
    long long n;cin>>n;
    while(n--)
    {
        long long a,b;
        cin>>a>>b;
        vector<vector<char> >  v1(a, vector<char>(b));
        vector<long long> v2; 
        vector<long long> v3; 
        long long ctr=0;
        for(long long i=0;i<a;i++)
        {
            for(long long j=0;j<b;j++)
            {
               cin>> v1[i][j];
               if(v1[i][j]=='#')
               {
                v2.push_back(i);
                v3.push_back(j);
                ctr++;
               }
            }
        }
        if(ctr==1)
        {
            cout<<v2[0]+1<<" "<<v3[0]+1<<"\n";
        }
        else
        { long long x = v2[0], y = v3[0];
           long long z=v2[v2.size()-1]-v2[0];
           long long z1=v2[0]+z/2;
             cout << z1+1<< " " << y+1<<"\n";
        }
      
        


    }
   

}
        




    
    




   
       
    
   
   


    

