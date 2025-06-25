#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
long long modExp(long long base, long long exp, int mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {  // If exp is odd, multiply base with result
            result = (result * base) % mod;
        }
        base = (base * base) % mod;  // Square the base
        exp /= 2;  // Divide the exponent by 2
    }
    return result;
}
long long modInverse(long long q, int mod) {
    // Using Fermat's Little Theorem: q^(mod-2) % mod
    return modExp(q, mod - 2, mod);
}
int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
	    int n,D;
	    cin>>n>>D;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    } int sum=0;
	    for(int i=0;i<n;i++){
	        int v=a[i];
	       
	        while(v>0){
	            int rem=v%2;
	            v/=2;
	            sum^=rem;
	        }
	    }
	        long long P = D + 1;
           long long Q = 2 * D;
            long long Q_inv = modInverse(Q, MOD);
             long long result = (P * Q_inv) % MOD;

           cout << result << endl;
	}

}