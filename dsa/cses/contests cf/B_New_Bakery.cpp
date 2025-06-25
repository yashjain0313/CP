#include <bits/stdc++.h>

using namespace std;
//godyash
signed main()
{
    ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
    long long t;cin>>t;
    while(t--)
    {
        long long n,a,b;
        cin>>n>>a>>b;
        long long mm=n-1;
        long long bb=b-1;
        long long num=n;
        long long mn=min(n,a);
       
        
  if(a>=b)
  {
    cout<<n*a<<endl;
  }
//   else 
//   {
//     { if(b-a>=n)
//   { long long sum=b;
//     while(mm--)
// {   sum+=bb;
//     bb--;
// }   
//  cout<<sum<<endl;
//   }
//   else
//   { long long sum=0;
//   long long ctr=0;
  
//     while(b!=num)
//     {
//         sum+=b;
//         b--;
//         ctr++;

//     }
//     sum+=a*(num-ctr);

   
// cout<<sum<<endl;
//   }}
 
  else 
  { if(b-a>=n)
  { long long sum=b;
    while(mm--)
{   sum+=bb;
    bb--;
}   
 cout<<sum<<endl;
  }
  else
  { long long sum=0;
  long long ctr=0;
  if(b!=num ||num==a)
   { while(b!=num)
    {
        sum+=b;
        b--;
        ctr++;

    }
    sum+=a*(num-ctr);}
    else
    {
        sum=b*(b+1)/2;
        
    }
    cout<<sum<<endl;




  }


  }
     
        

        
      
        

}
}


        




    
    




   
       
    
   
   


    

