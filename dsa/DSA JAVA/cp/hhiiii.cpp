#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        int u = N + M;
        vector<int> batsmen(N), bowlers(M), arr(u);
        if(N<4||M<4||N+M<11)
        cout<<-1;
        else
           { for (int i = 0; i < N; i++) {
                cin >> batsmen[i];
            }
            for (int i = 0; i < M; i++) {
                cin >> bowlers[i];
            }
            for (int i = 0; i < N; i++) {
                arr[i] = batsmen[i];
            }
            for (int i = 0; i < M; i++) {
                arr[N + i] = bowlers[i];
            }
            sort(arr.begin(), arr.end(), greater<int>());
        int y=u-11;
            int sum = 0;
            for (int i = y; i < u; i++) {
                sum += arr[i];
            }
        
            cout << sum << endl;
        }
 
}
   return 0;}