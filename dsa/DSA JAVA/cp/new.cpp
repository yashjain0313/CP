#include<bits/stdc++.h>
using namespace std;
int main ()
{
     int T = 1;
cin >> T;
while (T--)
    {int n,k;
    cin >> n >> k;
    int a[n];
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i];
    }
    if(sum <= k){
        cout<< n << endl;
        break;
    }
    int x=0,y=n;
    int ctr=0;
    for(int i=1;i<n;i++)
    if(k%i!=0)
    {       if(a[x]>0)
            { a[0]=a[0]-1;
             k--;}
             else 
             {a[x]=a[x+1];
             n--;
             k--;
             ctr++;
             }
             
    }
    else
    {    if(a[y-1]>0)
            { a[y-1]=a[y-1]-1;
             k--;}
             else 
             {a[y-1]=a[y-2];
             n--;
             k--;
             ctr++;
             }

    }
    
    
   cout<<ctr<<endl;


        }
return 0;
}