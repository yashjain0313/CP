#include <bits/stdc++.h>
using namespace std;

signed main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
    int a;
    cin>>a;
    vector<int>v1;
    vector<int>v2;
  for(int i=0;i<a;i++)
  {    int x,y;
  cin>>x>>y;
  v1.push_back(x);
  v2.push_back(y);
  }
  vector<int>v3;
  for(int i=0;i<a;i++)
  { 
    for(int j=i+1;j<a;j++)
    {
        int m;
    m=v1[i]*v2[j]+v2[i]*v1[j];
    v3.push_back(m);
    }
    
  }
 cout<<*max_element (v3.begin(), v3.end());



cout<<endl;
  }
  
 
  return 0;
}
