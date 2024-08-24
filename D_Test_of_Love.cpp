#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define mk make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfr(n) for(int i=n-1;i>=0;i--)
#define rep1(i,a,b) for(long long i=a;i<=b;i++)
#define fr(n) for(long long i=0;i<n;i++)
#define nesfr(x,y) for(long long i=0;i<x;i++)for(long long j=0;j<y;j++)
#define rep(i,a,b) for(long long i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl cout << "\n"
const unsigned int M = 1000000007;
const int  N = 2e5 + 5 ;



int main() {
    fast;
    ll t=1;
    cin >> t;
    while(t--) {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<char> v(n);
        for (auto &it : v) cin >> it;
        vector<pair<string, vector<int>>> vp; 
        ll cntc = 0;
        ll cntw = 0;
        for (ll i = 0; i < n+1; i++) {
            if (v[i] == 'L' || (v[i] != 'W' && v[i] != 'C')) {
                if (v[i-1] == 'W') {
                    int x=i-1;
                    while (v[x] == 'W' && k>0) {
                        x--;
                        cntw--;
                        k--;
                    }
                }
                vp.push_back({cntw, cntc}); 
                cntc = 0; cntw = 0;
            } else {
                if (v[i] == 'W') ;
                if (v[i] == 'C') cntc++;
            }
        }
        bool flag = true;
        // for (auto it : vp) cout << it.first << " " << it.second << endl;
        for (ll i = 0; i < vp.size(); i++) {
            ll sum = vp[i].first + vp[i].second;
            if (sum < m) {
                continue;
            } 
            else {
                if (vp[i].second != 0) {
                    flag = false;
                    cout << "NO" << endl;
                    break;
                }
                else {
                    if (vp[i].first <= k) {
                        k -= vp[i].first;
                        continue;
                    }
                    else {
                        flag = false;
                        cout << "NO" << endl;
                        break;
                    }
                }
            }
        }
        if (flag) cout << "YES" << endl;
    }
    return 0;
}