#include <bits/stdc++.h>
using namespace std;



int main() {
    long long t;
    cin >> t;
    while(t--){
        long long num;
        cin >> num;
        string sg;
        cin >> sg;
  long long m1 = 0;
  for (long long i = 0; i < num; i++) {
    if (sg[i] == '1') {
      if ( sg[i-1]!= sg[i])
           m1=m1+1;
    }
  }

  long long m2 = 0;
  for (long long i= 0;i < num;i++) {
    if (sg[i]=='0') {
      if ( sg[i-1]!=sg[i])
         m2=m2+1;
    }
  }
  long long answer = min(m1, m2);
  cout<<answer;

    

  
 

    


    }
    
}