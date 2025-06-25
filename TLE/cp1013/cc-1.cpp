#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<ll> c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        // Precompute the total capacity of all stations
        ll total_capacity = 0;
        for (ll capacity : c)
        {
            total_capacity += capacity;
        }

        for (int i = 0; i < q; i++)
        {
            ll x, y;
            cin >> x >> y;

            ll min_tokens = LLONG_MAX;

            // Try each station as the crew cabin
            for (int j = 0; j < n; j++)
            {
                // Calculate tokens needed for crew
                ll tokens_for_crew = max(0LL, x - c[j]);

                // Calculate the storage capacity if this station is used for crew
                ll available_storage = total_capacity - c[j];

                // Calculate tokens needed for storage
                ll tokens_for_storage = max(0LL, y - available_storage);

                // Total tokens needed for this configuration
                ll total_tokens = tokens_for_crew + tokens_for_storage;

                // Update the minimum tokens required
                min_tokens = min(min_tokens, total_tokens);
            }

            cout << min_tokens << " ";
        }
        cout << endl;
    }

    return 0;
}
