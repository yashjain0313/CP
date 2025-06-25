#include <bits/stdc++.h>
using namespace std;

signed main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int a=92;
    while(a>0)
 { cout<<a-(a&(a-1))<<endl;
 a=a&(a-1);
 
 }
  





  

    return 0;
}
