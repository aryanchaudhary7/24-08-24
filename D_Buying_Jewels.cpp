#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n,m,k;
        cin >> n >> m >> k;
        vector<int> v(n);
        for (auto& it : v) cin >> it;
        int b = 0;
        ll ok = 0;
        for (int i=0; i<n; i++) {
            int temp = min(k,m);
            ok += temp*(v[i] + b);
            b+=temp;
            k -= temp;
        }
        cout << ok << endl;
    }
    return 0;
}