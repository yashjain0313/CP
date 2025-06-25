#include <bits/stdc++.h>
using namespace std ;
#define int long long
const int MOD =1e9+7;
const int INF= LLONG_MAX>>1;
int countDifferences(const std::vector<char>& v1, const std::vector<char>& v2) {
    if (v1.size() != v2.size()) {
        throw std::invalid_argument("Vectors must be of the same length");
    }
    
    int differences = 0;
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            ++differences;
        }
    }
    return differences;
}
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
   int a,b;
   cin>>a>>b;
   string s1,s2;
   cin>>s1>>s2;
   vector<int>v1;
   vector<int>v2;
   int c=b;
   while(c--)
   {
    int x,y;
    cin>>x>>y;;
    v1.push_back(x);
    v2.push_back(y);
   }
   for(int i=0;i<b;i++)
   {
  vector<char>v3;
   vector<char>v4;
        int x=v1[i];
        int y=v2[i];
         for(int i=x;i<=y;i++)
         {
            v3.push_back(s1[i-1]);
            v4.push_back(s2[i-1]);
         }
         sort(v3.begin(),v3.end());
         sort(v4.begin(),v4.end());

         map<char, int> m1;
         map<char, int> m2;
        for (char num : v3) {
            m1[num]++;
        }
         for (char num : v4) {
            m2[num]++;
        }
        vector<char> r1;        
        vector<char> r2;                
        for (const auto& ent : m1) {
                r1.push_back(ent.first);
            }
         for (const auto& entry : m2) {
                r2.push_back(entry.first);
            }
        
        if(r1.size()!=r2.size())
        { 
            int tt=r1.size();
            int ss=r2.size();
            cout<<max(tt,ss)-min(tt,ss)<<endl;
        }
        else
        {
               sort(r1.begin(),r1.end());
         sort(r2.begin(),r2.end());
            int count =0;
            int ct =0;
          for(int i=0;i<r1.size();i++)
          {
             for(int j=0;j<r1.size();j++)
             {
                if(r1[i]==r2[j]){
                        count++; 
                        break;
                }

             }
          }
          


        }

        }


   }
    }
   
    

   

    




