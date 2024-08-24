#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> v;
vector<int> seg;

void build(ll ind, ll low, ll high) {
    if (low == high) {
        seg[ind] = v[low];
        return;
    }
    ll mid = (high + low) / 2;
    build(2 * ind + 1, low, mid);
    build(2 * ind + 2, mid + 1, high);
    seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
}

int query(ll ind, ll low, ll high, ll l, ll r) {
    if (l > high || r < low) {
        return INT_MAX;
    }
    if (l <= low && r >= high) {
        return seg[ind];
    }
    ll mid = (low + high) / 2;
    ll left = query(2 * ind + 1, low, mid, l, r);
    ll right = query(2 * ind + 2, mid + 1, high, l, r);
    return min(left, right);
}

void update(ll ind, ll low, ll high, ll i, ll val) {
    if (low == high) {
        seg[ind] = val;
        return;
    }
    ll mid = (low + high) / 2;
    if (i <= mid)
        update(2 * ind + 1, low, mid, i, val);
    else
        update(2 * ind + 2, mid + 1, high, i, val);
    seg[ind] = min (seg[2 * ind + 1], seg[2 * ind + 2]);
}

int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, q;
    cin >> n >> q;
    v.resize(n);
    for (auto& it : v) cin >> it;
    seg.resize(4*n);
    build(0, 0, n - 1);
    while (q--) {
        ll z, l, r;
        cin >> z >> l >> r;
        if (z==2) {
            ll ans = query(0, 0, n - 1, l - 1, r - 1);
             cout << ans << '\n';
        }
        else update (0, 0, n-1, l-1, r);
    }
    return 0;
}
