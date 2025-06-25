#include <bits/stdc++.h>
using namespace std;

signed main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int a;
  cin>>a;
  while(a--)
  {int n,m;
  cin>>n>>m;
  string s;
  cin>>s;
  
 map<char, int> mp;
  for(char c:s)
  {
mp[c]++;
  }
int tot=7;
  int sum=0;
  int ctr=0;
  for (const auto& entry : mp)
  {
    ctr++;

    if(entry.second<m)
    {
        sum+=m-entry.second;
    }
  }
  if(ctr<7)
  {
    sum+=(7-ctr)*m;
   
  }
  cout<<sum<<endl;

  
  
//   if(count!=7)
//   {
//     sum=sum+(7-count)*m;
//   }
//   cout<<sum<<endl;
// int it=mp.begin();
// while (it != mp.end()) {
//         cout << "Key: " << it->first
//              << ", Value: " << it->second << endl;
//         ++it;
//     }



//        unordered_map<int, int> mp;
//         for (int num : nums) {
//             mp[num]++;
//         }
//         vector<int> result;
//         for (const auto& entry : mp) {
//             if (entry.second == 1) {
//                 result.push_back(entry.first);
//             }
//         }
        


 


//   }




  
  }
    return 0;
}
