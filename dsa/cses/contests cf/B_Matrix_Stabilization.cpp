#include <iostream>
#include <vector>
using namespace std;
int check(int a,int b,int c,int d)
{
   int y= max(max(max(a,b),c),d);
   return y;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    while (n--) {
        long long a, b;
        cin >> a >> b;
        vector<vector<int> > v1(a, vector<int>(b));

     
        for (long long i = 0; i < a; i++) {
            for (long long j = 0; j < b; j++) {
                cin >> v1[i][j];
            }
        }

       
        for (long long i = 0; i < a; i++) {
            for (long long j = 0; j < b; j++) {
                v1[i][j]=check(v1[i][j+1],v1[i+1][j],v1[i-1][j],v1[i][j-1]);

                
            }
            cout << endl;
        }

        for (long long i = 0; i < a; i++) {
            for (long long j = 0; j < b; j++) {
                cout << v1[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
