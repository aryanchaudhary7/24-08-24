#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> seg;
vector<ll> arr;

void build (ll ind, ll low, ll high) {
    if (low == high) {
        seg[ind] = arr[low];
        return;
    }
    ll mid = (low+high)/2;
    build (2*ind+1, low, mid);
    build (2*ind+2, mid+1, high);
    seg[ind] = seg[2*ind+1] + seg[2*ind+2];
}

// ll query(ll ind, ll low, ll high, ll l, ll r) {
//     if (l > high || r < low) {
//         return 0;
//     }
//     if (l <= low && r >= high) {
//         return seg[ind];
//     }
//     ll mid = (low + high) / 2;
//     ll left = query(2 * ind + 1, low, mid, l, r);
//     ll right = query(2 * ind + 2, mid + 1, high, l, r);
//     return left + right;
// }

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
    seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2]; // Update parent node after updating child nodes
}


int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    arr.resize(n);
    for (auto& it : arr) cin >> it;
    seg.resize(4*n);
    build (0,0,n-1);
    ll mycnt;
    for (ll i=0; i<n; i++) {
        auto x = find (v.begin(), v.end(), i);
        if (i == v.end()) mycnt = i;
    }
    return 0;
}