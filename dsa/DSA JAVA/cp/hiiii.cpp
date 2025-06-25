#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{   int ans =0;
    int a;
    int k;
    cin>>a>>k;
    int ar[a];
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+a);

   
        for(int j=0;j<k;j++)
    {
       if(ar[j]==1)
       {
        ar[j]=6;
       }
       else if (ar[j]==2)
       {
        ar[j]=5;
       }
       else if(ar[j]==3)
       {
        ar[j]=4;
       }

    }
    
    
    
    for(int i=0;i<a;i++)
    { 
        ans=ans+ar[i];
    }
    cout<<ans<<endl;

}

    
}


