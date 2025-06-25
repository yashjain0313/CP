#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int a;
        string s1,s2;
        cin>>a;
        cin>>s1>>s2;
        int f=0;
         char c= s1[0];
         int dd=0;
            int num = c-'0';
        for(int i=0;i<a;i++)
        {
            if(s1[i]!=s2[i])
            {   
                int want=s2[i]-'0';
                int get=0;
                if(s1[i]!=c)
                {
                    get+=1;
                }
                else{
                    get+=0;
                }
                if(want!=get)
                {   if(dd<i)
                   { dd++;
                   c=s1[dd];
                   i--;}
                }
                else{
                    s1[i]=s2[i];
                }
            }
           
        }
       if(s1==s2)
        { cout<<"YES"<<endl;}
        else{
            cout<<"NO"<<endl;
        }

       

        

           
        
    }
    return 0;
}
