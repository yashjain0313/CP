#include <bits/stdc++.h>
#include <vector>
#include <bitset>
using namespace std;



vector<int> decimalToBinary(int num) {
    vector<int> binaryVector;
    while (num > 0) {
        binaryVector.insert(binaryVector.begin(), num % 2);
        num /= 2;
    }
    return binaryVector;
}

signed main() {
    int ab=32767;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long t;
    cin >> t;
    while (t--) {
      long long a;
      cin>>a;
      vector<int>v1;
      for(int i=0;i<a;i++){
        int x;
        cin>>x;
        v1.push_back(x);
      }
      int an=v1[0];
   
       cout<<endl;
    //    for(int i=0;i<a;i++){
    //     bin(v1[i]);
    //     cout<<endl;
    //   }
    int nm=1;
    sort(v1.begin(),v1.end());
      for(int i=1;i<a;i++){
           an=an|v1[i];
if(ab&an==ab)
{
    cout<<a-i-1<<endl;
break;
}
      }
           cout<<endl;
      }

      
      
   
   
    
        









      

       

       
    
    return 0;
}
     
        
        
           
            
            
        
        
        

       
      
    

    

