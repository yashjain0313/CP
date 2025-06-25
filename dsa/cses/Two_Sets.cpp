#include <bits/stdc++.h>

using namespace std;
//godyash
signed main()
{
    ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
    long long n;cin>>n;
    long long d=n;
    long long m=n/2;
    long long p=n-m;
    long long sum =n*(n+1)/2;
    long long sum2=sum/2;
    long long id;
 vector<long long>v1;
long long ctr=0;
 if(sum&1||n==2)
 {
    cout<<"NO";
    
 }
 else if (n==3)
 {
     cout<<"YES"<<"\n";
     cout<<
1<<"\n"<<3<<"\n"<<2<<"\n"<<1<<" "<<2 <<"\n";
 }
 else{
    cout<<"YES"<<"\n";
    while(sum2!=0)
    {  
        if(sum2<n)
        {  
            v1.push_back(sum2);
                        ctr++;
           id=sum2;
            break;
            
        }
        sum2-=n;


    v1.push_back(n);
        n--;
        ctr++;



    }
    cout<<ctr<<"\n";
    for(long long i=0;i<v1.size();i++)
 {
    cout<<v1[i]<<" ";
 }
 cout<<"\n";




 cout<<d-ctr<<"\n";
 for(long long i=1;i<=(d-ctr)+1;i++)
 {
       if(i==id)
       {
        continue;
       }else
       {
        cout<<i<<" ";
       }

 }
   
 }
 
 

    

   




        





    }
    




   
       
    
   
   


    

