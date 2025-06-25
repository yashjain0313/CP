#include <iostream>
#include <vector>

using namespace std;

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;

    while (n--) {
        long long a, b;
        cin >> a >> b;

        vector<int> op;
        int sum = a;
        int ctr = 0;
        if(a>=1&&b==1)
        {
            cout<<"YES"<<endl;
        }
        else

      {  for (int i = 1; i <= a; i++) {
            
            op.push_back(1);
            ctr++;
            int temp=i;
            while (temp--) {
                op.push_back(0);
                ctr++;
               
               
            }
            if(ctr>=a)
            {
                break;
            }
           
        }

        for (int i = 0; i < op.size(); i++) {
            cout << op[i] << " "; // Output without newline
        }

        cout << endl;
    }}

    return 0;
}
