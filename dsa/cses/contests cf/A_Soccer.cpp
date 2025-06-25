#include <bits/stdc++.h>
#include <vector>
using namespace std;


signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    while (n--) {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long mx1=max(a,c);
        long long mn1=a+c-mx1;
        long long mx2=max(b,d);
        long long mn2=b+d-mx2;
        if(a==c && (mx2>=a&& mn2<=a))
        {
            cout<<"NO"<<endl;
        }
        else if(b==d && (mx1>=b&&mn1<=b))
        {
            cout<<"NO"<<endl;
        }
        else if(a<b && c>d|| b<a && d>c)
{
    cout<<"NO"<<endl;
}
else
{
    cout<<"YES"<<endl;
}
        // else if(d>a && d>b && d<c)
        //    {
        //     cout<<"NO"<<endl;
        //    }
        //    else if(c>a && c>b && d>c)
        //    {
        //     cout<<"NO"<<endl;
        //    }
        //    else 
        //    {
        //     cout<<"YES"<<endl;
        //    }
    //    else 
    //    {
    //     long long df1= a-c;
    //     long long df2=b-d;
    //     long long dfm1=max(df1,df2);
    //     // a+=mx1;
        // b+=mx1;
        // if(a==c&&b==d)
        // {
        //     cout<<"YES"<<endl;
        // }
        // else if(a==c)
        // {   
//         long long ctr=0;
//         for(long long i=0;i<dfm1;i++)
//         {
//             a++;
//             b++;
//             if(a==c&& d>a)
//             {
//                 cout<<"NO"<<endl;
//                 ctr=1;
//                 break;
//             }
//             else if(b==d && c>b)
//             {
//                 cout<<"NO"<<endl;
//                 ctr=1;
//                 break;
//             }
//         }
// if(ctr==0)
// { cout<<"YES"<<endl;}




        }
        
        
           
            
            
        }
        
        

       
      
    

    

