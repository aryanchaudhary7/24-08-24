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
using pii = pair<ll, ll>;
const ll INF = numeric_limits<ll>::max();
struct Edge {
    ll to, weight;
};
signed main() {
    fast;
    ll n, m;
    cin >> n >> m;
    vi a(n);
    for (auto &it : a) cin >> it;
    
    map<pair<ll, ll>, ll> mp;
    for (ll i = 0; i < m; ++i) {
        ll u, v, w;
        cin >> u >> v >> w;
        mp[{u - 1, v - 1}] = w;
        mp[{v - 1, u - 1}] = w;
    }
    vector<vector<Edge>> ans(n);
    for (const auto &edge : mp) {
        ll u = edge.first.first;
        ll v = edge.first.second;
        ll w = edge.second;
        ans[u].push_back({v, w});
        ans[v].push_back({u, w});
    }

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vi dist(n, INF);
    dist[0] = a[0];
    pq.emplace(dist[0], 0);

    while (!pq.empty()) {
        ll current_dist = pq.top().first;
        ll u = pq.top().second;
        pq.pop();

        if (current_dist > dist[u]) continue;

        for (auto &edge : ans[u]) {
            ll v = edge.to;
            ll weight = edge.weight + a[v];
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.emplace(dist[v], v);
            }
        }
    }

    for (ll i = 1; i < n; ++i) {
        if (i != 1) cout << " ";
        if (dist[i] == INF) {
            cout << "INF";
        } else {
            cout << dist[i];
        }
    }
    cout << "\n";

    return 0;
}


