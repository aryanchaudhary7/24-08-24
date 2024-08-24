#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n,k,b,s;
        cin >> n >> k >> b >> s;
        vector<int> p(n);
        vector<int> a(n);
        for (auto &it : p) cin >> it;
        for (auto &it : a) cin >> it;
        int ptb=a[b], pts=a[s];
        k--;
        while (k > 0) {
            if (a[b] > a[p[b]]) {
                ptb += a[b];
            }
            else 
        }
    }
    return 0;
}