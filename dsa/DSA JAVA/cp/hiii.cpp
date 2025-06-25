#include <bits/stdc++.h>
using namespace std;
 
#define int long long



 
signed main()
{
   
   int test; 
   cin>>test;
   while(test--)
 {

int num;
  int ans;
  ans =0;
   cin>>num; 
   int arr[num];
  map<int,int>mp;
  for(int i=0;i<num;i++)
  {
    cin>>arr[i];
    mp[arr[i]]++;
  }
  for(auto it:mp)
  {
    int key=it.second;
    ans=ans+(key/3);
  }
  
  cout<<ans<<"\n";




 }
}  