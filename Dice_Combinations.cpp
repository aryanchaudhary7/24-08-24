#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;

    vector<ll> dp(n + 1);
    dp[0] = dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = 0;
        for (int j = max(0, i - 6); j < i; j++) {
            dp[i] = (dp[i] + dp[j]) % mod;
        }
    }

    cout << dp[n] << "\n";
    return 0;
}
