#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;

    while (tt--) {
        ll n;
        cin >> n;

        vector<pair<ll, ll>> a(n);
        vector<pair<ll, ll>> b(n);
        vector<pair<ll, ll>> c(n);

        for (ll i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }

        for (ll i = 0; i < n; i++) {
            cin >> b[i].first;
            b[i].second = i;
        }

        for (ll i = 0; i < n; i++) {
            cin >> c[i].first;
            c[i].second = i;
        }

        sort(a.begin(), a.end(), greater<pair<ll, ll>>());
        sort(b.begin(), b.end(), greater<pair<ll, ll>>());
        sort(c.begin(), c.end(), greater<pair<ll, ll>>());

        ll max_sum = LLONG_MIN;
        
        // Iterate over all possible combinations of indices (i, j, k)
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) {
                for (ll k = 0; k < n; k++) {
                    if (a[i].second != b[j].second && a[i].second != c[k].second && b[j].second != c[k].second) {
                        ll current_sum = a[i].first + b[j].first + c[k].first;
                        max_sum = max(max_sum, current_sum);
                    }
                }
            }
        }

        // Output the maximum sum
        cout << max_sum << endl;
    }

    return 0;
}
