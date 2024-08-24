// // #include<bits/stdc++.h>
// // #define ll long long
// // using namespace std;

// // vector<ll> seg;
// // vector<ll> arr;

// // ll build(ll ind, ll low, ll high, ll cnt) {
// //     if (low == high) {
// //         seg[ind] = arr[low];
// //         return 1;
// //     }
// //     ll mid = (low + high) / 2;
// //     ll ans = build(2 * ind + 1, low, mid, cnt+1);
// //     ll ans1 = build(2 * ind + 2, mid + 1, high, cnt+1); 
// //     if (ans == 1 || ans1 == 1) {
// //         seg[ind] = seg[2 * ind + 1] ^ seg[2 * ind + 2];
// //         return 0;
// //     }
// //     seg[ind] = seg[2 * ind + 1] | seg[2 * ind + 2];
// //     return 1;
// // }

// // ll update (ll ind, ll low, ll high, ll i, ll val) {
// //     if (low == high) {
// //         seg[ind] = val;
// //         return 1;
// //     }
// //     ll mid = (low+high)/2;
// //     if (i <= mid) {
// //         ll ans = update (2*ind+1, low, mid, i, val);
// //         if (ans == 1) {
// //             seg[ind] = seg[2 * ind + 1] ^ seg[2 * ind + 2];
// //             return 0;
// //         }
// //         seg[ind] = seg[2 * ind + 1] | seg[2 * ind + 2];
// //         return 1;
// //     }
// //     else {
// //         ll ans1 = update (2*ind+2, mid+1, high, i, val);
// //         if (ans1 == 1) {
// //             seg[ind] = seg[2 * ind + 1] ^ seg[2 * ind + 2];
// //             return 0;
// //         }
// //         seg[ind] = seg[2 * ind + 1] | seg[2 * ind + 2];
// //         return 1;
// //     }
// // }

// // int main() {
// //     ll n, k;
// //     cin >> n >> k;
// //     ll result = 1 << n;
// //     arr.resize(result);
// //     seg.resize(4 * result);
// //     for (auto &it : arr) 
// //         cin >> it;
// //     build(0, 0, result - 1, 0);
// //     while (k--) {
// //         ll l, r;
// //         cin >> l >> r;
// //         update (0, 0, result - 1, l - 1, r - 1);
// //         // cout << seg[0] << "\n";
// //     }
// //     return 0;
// // }


// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;

// int update (vector <ll> &seg , ll val , ll value , ll low , ll high , ll ind) {
//     if (low == high) {
//         seg[ind] = value;
//         return 1;
//     }

//     ll mid = (low + high) / 2;
//     if (val <= mid) {
//         int ans = update (seg , val , value , low , mid , 2* ind + 1);
//         if (ans == 1) {
//             seg[ind] = (seg[2*ind + 1] | seg[2*ind + 2]);
//             return 0;
//         }
//         else seg[ind] = (seg[2* ind + 1] ^ seg[2*ind + 2]);
//         return 1;
//     }
//     else {
//         int ans = update (seg , val , value , mid + 1 , high , 2* ind + 2);
//         if (ans == 1) {
//             seg[ind] = (seg[2*ind + 1] | seg[2*ind + 2]);
//             return 0;
//         }
//         else seg[ind] = (seg[2* ind + 1] ^ seg[2*ind + 2]);
//         return 1;
//     }
    
// } 

// int build (vector <ll> &v , vector <ll> &seg , ll low , ll high , ll ind) {
//     if (low == high){
//         seg[ind] = v[low];
//         return 1;
//     }

//     ll mid = (low + high) / 2;
//     int ans = build (v , seg , low , mid , 2*ind + 1);
//     int ans1 = build (v , seg , mid + 1 , high , 2* ind + 2);

//     if (ans == 1 && ans1 == 1) {
//         seg[ind] = (seg[2*ind + 1] | seg[2*ind + 2]);
//         return 0;
//     }
//     else if(ans == 0 && ans1 == 0) {
//         seg[ind] = (seg[2* ind + 1] ^ seg[2*ind + 2]);
//         return 1;
//     }
    
//     return -1;
// }
// int main() { 
//     ios_base::sync_with_stdio(false);
//     int tt = 1;
//     // cin >> tt;
//     while (tt--) {
//         ll n; cin >> n;
//         n = (1 << n);
//         // cout << n << endl;
//         ll q; cin >> q;

//         vector <ll> v(n);
//         vector <ll> seg(4*n);

//         for (ll i = 0 ; i < n ; i++) {
//             cin >> v[i];
//         }

//         build(v , seg , 0 , n - 1 , 0);

//         // for (auto it : seg) {
//         //     cout << it << " ";
//         // }

//         while (q--) {
//             ll val; cin >> val;
//             val--;
//             ll value; cin >> value;
//             update (seg , val , value , 0 , n - 1 , 0);
//             cout << seg[0] << endl;
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> arr;
vector<ll> seg;

void build (ll ind , ll low, ll high, ll operation) {
    if (low == high) {
        seg[ind] = arr[low];
        return;
    }
    ll mid = (low+high)/2;
    build (2*ind+1, low, mid, !operation);
    build (2*ind+2, mid+1, high, !operation);
    if (operation == 0)
        seg[ind] = seg[2*ind+1] | seg[2*ind+2];
    else
        seg[ind] = seg[2*ind+1] ^ seg[2*ind+2];
}

void update (ll ind, ll low, ll high, ll i, ll val, ll operation) {
    if (low == high) {
        seg[ind] = val;
        return;
    }
    ll mid = (low+high)/2;
    if (i <= mid) {
        update (2*ind+1, low, mid, i, val, !operation);
    }
    else {
        update (2*ind+2, mid+1, high, i, val, !operation);
    }
    if (operation == 0)
        seg[ind] = seg[2*ind+1] | seg[2*ind+2];
    else
        seg[ind] = seg[2*ind+1] ^ seg[2*ind+2];
}

int main() {
    ll n,k;
    cin >> n >> k;
    n = (1<<n);
    arr.resize(n);
    seg.resize(4*n);
    for (auto& it : arr) cin >> it;
    ll operation;
    ll cnt = (ll) ceil(log2(n));
    if (cnt%2==0) operation = 1;
    else operation = 0;
    build (0,0,n-1,operation);
    while (k--) {
        ll l,r;
        cin >> l >> r;
        update (0,0,n-1,l-1,r,operation);
        cout << seg[0] << "\n";
    }
    return 0;
}
