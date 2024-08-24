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
        int sum=0;
        for (auto &it : v) cin >> it;
        sort (v.begin(), v.end());
        for (int i=0; i<n; i++) {
            if (v[i] <= 3 && k != 0) {
                sum += 7-v[i];
                k--;
            }
            else sum += v[i];
        }
        cout << sum << "\n";
    }
    return 0;
}