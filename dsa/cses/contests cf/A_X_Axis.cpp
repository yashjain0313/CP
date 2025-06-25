#include <bits/stdc++.h>

using namespace std;
//godyash
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    while(n--)
    {
        long long a,b,c;
        vector<long long>v1;
        vector<long long>v2;
        cin >> a >> b >> c;
        long long mx=max(max(a,b),c);
        long long mn=min(min(a,b),c);
        for(long long i=mn;i<=mx;i++)
        {
            long long ans;
            ans=abs(a-i)+abs(b-i)+abs(c-i);
            v1.push_back(ans);
        }

        long long x=*min_element(v1.begin(),v1.end());
        cout<<x<<endl;
        // for(long long i=0;i<v1.size();i++)
        // {
        //     if(v1[i]==x)
        //     {
        //         cout<<mn+i<<endl;
                
        //     }
        // }

        
    }

}



    
    




   
       
    
   
   


    

