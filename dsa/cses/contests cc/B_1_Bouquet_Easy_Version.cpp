#include <bits/stdc++.h>
using namespace std ;
#define int long long
const int MOD =1e9+7;
const int INF= LLONG_MAX>>1;
//godyash
signed main()
{
ios::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;
while(t--)
{
    int N,k;
    cin>>N>>k;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    vector<int>v4;
    vector<int>v5;
    vector<int>v6;
    for(int i=0;i<N;i++)
{
    int x;
    cin>>x;
    v1.push_back(x);

}
sort(v1.begin(),v1.end());

     map<int, int> mp;
        for (int num : v1) {
            mp[num]++;
        }

       for (auto& entry : mp) {
            v2.push_back(entry.first);
            v3.push_back(entry.second);
        }

 
    for(int i=0;i<v2.size()-1;i++)
{
  if(v2[i]+1==v2[i+1])
  {
    v4.push_back((v2[i]*v3[i])+(v2[i+1]*v3[i+1]));
    v5.push_back(v2[i]);
    v5.push_back(v2[i+1]);
    v6.push_back(v3[i]);
  }
}

    sort(v4.begin(),v4.end());
    int sz=v4.size();
    if(sz==0)
        {  
             cout<<*max_element(v2.begin(),v2.end())<<endl;
        }
        else
    {
        if(v4[sz-1]>k && v2[v2.size()-1]<k)
    {int m=v4[sz-1];
    int i=0;
        while(m>k && i<v5.size())
        {
            m-=v5[i];
            i++;
        }
        // cout<<m<<" aa"<<endl;
        if(m>*max_element(v2.begin(),v2.end()))
       { cout<<m<<endl;}
       else{
        cout<<*max_element(v2.begin(),v2.end())<<endl;
       }
    }
    else{
          if(*max_element(v2.begin(),v2.end())>*max_element(v4.begin(),v4.end()))
       { cout<<*max_element(v2.begin(),v2.end())<<endl;}
       else{
        cout<<*max_element(v4.begin(),v4.end())<<endl;
       }
       
    }
   

}

    
 



}

}
