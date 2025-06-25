#include <bits/stdc++.h>
#include <vector>
using namespace std;


signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    while (n--) {
        long double x,y,k;
        cin>>x>>y>>k;
        while(k--)
        {
            x++;
            if(lround(x)%lround(y)==0)
            {
                x=ceil(x/y);
                x=ceil(x/y);
            }
        }
        cout<<x<<endl;



     
       




        }
        
        
           
            
            
        }
        
        

       
      
    

    

