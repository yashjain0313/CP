#include <bits/stdc++.h>
using namespace std ;
#define int long long
const int MOD =1e9+7;
const int INF= LLONG_MAX>>1;
int countDigit(long long n) { return floor(log10(n) + 1); }
string reverseDigits(int num) {
  
    string s = to_string(num);


    reverse(s.begin(), s.end());


    int originalLength = s.length();


    string reversedWithZeros = s;
    while (reversedWithZeros.length() < originalLength) {
        reversedWithZeros += '0';
    }

    return reversedWithZeros;
}

signed main()
{
ios::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);
int a;
cin>>a;
if(a<=10)
{
    cout<<a-1;
}
else if (a==11)
{
    cout<<11;
}
else{
    int l=countDigit(a);
     int m=a/10;
    int n=a%10;
    int d;
    while(l--)
    {
          d=m/10;
    }
    if(m==1)
    {
        cout<<n<<n;
    }
    if(d==0)
    {cout<<m-1-d<<n<<reverseDigits(m-d);}
    else{
        cout<<m-d<<n<<reverseDigits(m-d);
    }

}





}
