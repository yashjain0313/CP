#include <bits/stdc++.h>
#include <vector>
using namespace std;
void bin(long long n)
{
    long long i;
    for (i = (1LL << 31); i > 0; i = i / 2) {
        // cout<<"h";
        if ((n & i) != 0) {
            cout << "1";
        }
        else {
            cout << "0";
        }
    }
}


signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long t;
    cin >> t;
    bin(t);
    
        










       

       
    
    return 0;
}
     
        
        
           
            
            
        
        
        

       
      
    

    

