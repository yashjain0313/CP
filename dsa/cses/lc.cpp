#include <bits/stdc++.h>

using namespace std;
//godyash
signed main()
{
    ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
   vector<long long>vv1;
    int ar[4]={1,5,11,5};
    sort(ar,ar+4);
    int sum=22;
    int sum2=sum/2;
 vector<long long>v1;
long long ctr=0;
 if(sum&1)
 {
    cout<<"NO";
    
 }
 else{
    int ctr=0;
        for(int i=3;i>=0;i--)
        {
                sum2-=ar[i];
                
                if(sum2==0)
                {      cout<<"YES"<<"\n";
                        ctr=1;
                        break;
                }
                else if(sum2<0)
                {
                  sum2+=ar[i];
                  for(int j=0;j<4;j++)
                  {
                        sum2+=ar[j];
                        if(sum2==0)
                        {   ctr=1;
                            cout<<"YES"<<"\n";
                            break;
                        }
                  }

                }
        }
        if(ctr==0)
        {
            cout<<"NO"<<"\n";
        }
    
        
        
    
    }
  
   
   
 }
 
 

    

   




        





    




   
       
    
   
   


    

