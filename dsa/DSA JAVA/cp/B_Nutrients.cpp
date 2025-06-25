#include <bits/stdc++.h>
using namespace std;

signed main() {
    long a,n,l;
    cin >>a>>n>>l;
    vector<int>v1;
    for(int i=1;i<=a;i++){
       
        v1.push_back(i);
    }
    int temp=0;
    temp=v1[n-1];
    v1[n-1]=v1[l-1];
    v1[l-1]=temp;
    
 vector<int>v2;
 for(int i=n-1;i<l-1;i++){
    v2.push_back(v1[i]);
 }
 reverse(v2.begin(),v2.end());
 for(int i=n,j=0;i<l-1;i++){
        v1[i]=v2[j];
        j++;


 }
  for(int i=0;i<a;i++){
    cout<<v1[i]<<" ";
   
 }

    

    return 0;
}
