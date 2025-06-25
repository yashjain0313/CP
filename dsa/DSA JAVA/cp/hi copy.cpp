#include<bits/stdc++.h>
using namespace std ;

int main ()
{  int ctr=0;
   
    int t ;
    cin>>t;
    while(t--)
    { ctr=0;
        int a;
        cin>>a;
        vector<long long int> ans; 
  
    for (int i = 0; i < a; i++) 
     { long long int m;
     cin>>m;
        ans.push_back(m);
    }

//godyash

map<long long int , long long int > M;
    for (long long int  i = 0; ans[i]; i++) {
        if (M.find(ans[i]) == M.end()) {
            M[ans[i]] = 1;
        }
 
        else {
            M[ans[i]]++;
        }
    }

   for(auto it:M)
  {
    long long int ny=it.second;
    ctr=ctr+(ny/3);
  }
cout<<ctr<<endl;

 
}
    
}






