#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n,k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto& x : v) cin >> x;
        sort (v.begin(), v.end());
        int max1 = 1;
        int ans = 1;
        for (int i=1; i<v.size(); i++) {
            int diff = v[i] - v[i-1];
            if (diff > k) max1 = 1;
            else max1++;
            ans = max(ans, max1);
        }
        cout << n - ans << "\n";
    }
    return 0;
}