// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("no-stack-protector")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
// #pragma GCC optimize("fast-math")
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("avx,avx2,fma")
// #include <bits/stdc++.h>
// using namespace std;
// #define pi (3.141592653589)
// #define mod 1000000007
// #define pb push_back
// #define is insert
// #define mk make_pair
// #define ff first
// #define ss second
// #define all(x) x.begin(), x.end()
// #define min3(a, b, c) min(c, min(a, b))
// #define min4(a, b, c, d) min(d, min(c, min(a, b)))
// #define rfr(n) for(int i=n-1;i>=0;i--)
// #define rep1(i,a,b) for(long long i=a;i<=b;i++)
// #define fr(n) for(long long i=0;i<n;i++)
// #define nesfr(x,y) for(long long i=0;i<x;i++)for(long long j=0;j<y;j++)
// #define rep(i,a,b) for(long long i=a;i<b;i++)
// #define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
// typedef long long int ll;
// typedef long double ld;
// typedef vector<ll> vi;
// #define nl cout << "\n"
// const unsigned int M = 1000000007;
// const int  N = 2e5 + 5 ;

// int main() {
//     fast;
//     ll t = 1;
//     cin >> t;
//     while (t--) {
//         ll n;
//         cin >> n;
//         vi v(n);
//         for (auto &it : v) cin >> it;
//         ll q;
//         cin >> q;
//         vector<pair<ll, ll>> vp(q);
//         for (auto &it : vp) cin >> it.first >> it.second;
//         vector<ll> mp;
//         for (ll i = 0; i < n; i++) {
//             if (i == n - 1 || v[i] != v[i + 1]) {
//                 mp.push_back({i+1});
//             } 
//             else {
//                 ll start = i;
//                 while (i < n - 1 && v[i] == v[i + 1]) {
//                     i++;
//                 }
//                 mp.push_back({start+1});
//             }
//         }
//         // for (auto it : mp) cout << it << endl;
//         for (ll i=0; i<q; i++) {
//             ll l = vp[i].first;
//             ll r = vp[i].second;
//             ll k=0;
//             while (mp[k] <= l) {
//                 k++;
//             } 
//             if (mp[k] > r) {
//                 cout << -1 << " " << -1 << endl;
//             }
//             else cout << l << " " << mp[k] << endl;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define vi vector<ll>
// #define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// // int main() {
// //     fast;
// //     ll t = 1;
// //     cin >> t;
// //     while (t--) {
// //         ll n;
// //         cin >> n;
// //         vi v(n);
// //         for (auto &it : v) cin >> it;
// //         ll q;
// //         cin >> q;
// //         vector<pair<ll, ll>> vp(q);
// //         for (auto &it : vp) cin >> it.first >> it.second;
// //         unordered_map<ll, vector<ll>> mp;
// //         for (ll i = 0; i < n; i++) mp[v[i]].push_back(i + 1);
// //         for (ll i = 0; i < q; i++) {
// //             ll l = vp[i].first;
// //             ll r = vp[i].second;
// //             int cnt = 0;
// //             for (auto &it : mp) {
// //                 vector<ll> ind = it.second;
// //                 ll left = ind[0];
// //                 ll right = ind[ind.size() - 1];
// //                 vi v1(2);
// //                 while (left <= right) {
// //                     ll mid = left + (right - left) / 2;
// //                     if (mid >= l && mid <= r) {
// //                         v1.push_back(mid);
// //                         cnt++;
// //                         break;
// //                     }
// //                     if (mid < l) left = mid + 1;
// //                     else right = mid - 1;
// //                 }
// //                 if (cnt == 2) {
// //                     cout << v1[0] << " " << v1[1] << endl;
// //                     break;
// //                 }
// //             }
// //             if (cnt < 2) cout << -1 << " " << -1 << endl;
// //         }
// //         cout << endl;
// //     }
// //     return 0;
// // }


// // #include <bits/stdc++.h>
// // using namespace std;

// // #define ll long long
// // #define vi vector<ll>
// // #define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// // int main() {
// //     fast;
// //     ll t = 1;
// //     cin >> t;
// //     while (t--) {
// //         ll n;
// //         cin >> n;
// //         vi v(n);
// //         for (auto &it : v) cin >> it;
// //         ll q;
// //         cin >> q;
// //         vector<pair<ll, ll>> vp(q);
// //         for (auto &it : vp) cin >> it.first >> it.second;
// //         unordered_map<ll, vector<ll>> mp;
// //         for (ll i = 0; i < n; i++) mp[v[i]].push_back(i + 1);
// //         for (ll i = 0; i < q; i++) {
// //             ll l = vp[i].first;
// //             ll r = vp[i].second;
// //             int cnt = 0;
// //             vi v1;
// //             for (auto &it : mp) {
// //                 vector<ll> ind = it.second;
// //                 ll left = 0;
// //                 ll right = ind.size() - 1;
// //                 while (left <= right) {
// //                     ll mid = left + (right - left) / 2;
// //                     if (ind[mid] >= l && ind[mid] <= r) {
// //                         v1.push_back(ind[mid]);
// //                         cnt++;
// //                         break;
// //                     }
// //                     if (ind[mid] < l) left = mid + 1;
// //                     else right = mid - 1;
// //                 }
// //                 if (cnt == 2) {
// //                     cout << v1[0] << " " << v1[1] << endl;
// //                     break;
// //                 }
// //             }
// //             if (cnt < 2) cout << -1 << " " << -1 << endl;
// //         }
// //         cout << endl;
// //     }
// //     return 0;
// // }


// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define vi vector<ll>
// #define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// int main() {
//     fast;
//     ll t = 1;
//     cin >> t;
//     while (t--) {
//         ll n;
//         cin >> n;
//         vi v(n);
//         for (auto &it : v) cin >> it;
//         ll q;
//         cin >> q;
//         vector<pair<ll, ll>> vp(q);
//         for (auto &it : vp) cin >> it.first >> it.second;
        
//         unordered_map<ll, set<ll>> mp;
//         for (ll i = 0; i < n; i++) mp[v[i]].insert(i + 1);
        
//         for (ll i = 0; i < q; i++) {
//             ll l = vp[i].first;
//             ll r = vp[i].second;
//             vector<ll> result(2, -1);
//             int cnt = 0;
//             for (const auto &it : mp) {
//                 const set<ll> &indices = it.second;
//                 auto it1 = indices.lower_bound(l);
//                 if (it1 != indices.end() && *it1 <= r) {
//                     result[cnt++] = *it1;
//                 }
//                 if (cnt == 2) break;
//             }
//             if (cnt < 2) cout << -1 << " " << -1 << endl;
//             else cout << result[0] << " " << result[1] << endl;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define vi vector<ll>
// #define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// int main() {
//     fast;
//     ll t;
//     cin >> t;
//     while (t--) {
//         ll n;
//         cin >> n;
//         vi v(n);
//         for (auto &it : v) cin >> it;
//         ll q;
//         cin >> q;
//         vector<pair<ll, ll>> queries(q);
//         for (auto &it : queries) cin >> it.first >> it.second;
        
//         unordered_map<ll, vector<ll>> mp;
//         for (ll i = 0; i < n; i++) mp[v[i]].push_back(i + 1);
        
//         for (ll i = 0; i < q; i++) {
//             ll l = queries[i].first;
//             ll r = queries[i].second;
//             vector<ll> result(2, -1);

//             for (const auto &entry : mp) {
//                 const vector<ll> &indices = entry.second;
                
//                 // Find the first index in the range [l, r]
//                 auto lower = lower_bound(indices.begin(), indices.end(), l);
//                 if (lower != indices.end() && *lower <= r) {
//                     if (result[0] == -1) result[0] = *lower;
//                     else if (result[1] == -1) result[1] = *lower;
//                 }
                
//                 // Find the second index in the range [l, r]
//                 if (result[1] != -1) break;  // We already found both values
                
//                 // Find the second index in the range [l, r]
//                 auto upper = upper_bound(indices.begin(), indices.end(), r);
//                 if (upper != indices.begin()) {
//                     --upper;
//                     if (*upper >= l && *upper != result[0]) {
//                         result[1] = *upper;
//                     }
//                 }
                
//                 if (result[1] != -1) break;  // We already found both values
//             }

//             cout << result[0] << " " << result[1] << endl;
//         }
//         cout << endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    fast;
    ll t = 1;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vi v(n);
        for (auto &it : v) cin >> it;
        ll q;
        cin >> q;
        vector<pair<ll, ll>> vp(q);
        for (auto &it : vp) cin >> it.first >> it.second;
        
        vector<ll> mp;
        for (ll i = 0; i < n; i++) {
            if (i == n - 1 || v[i] != v[i + 1]) {
                mp.push_back(i + 1);  
            } else {
                ll start = i;
                while (i < n - 1 && v[i] == v[i + 1]) {
                    i++;
                }
                mp.push_back(start + 1);  
            }
        }
        // for (auto it : mp) cout << it << " ";
        for (ll i = 0; i < q; i++) {
            ll l = vp[i].first;
            ll r = vp[i].second;
            ll left = 0, right = mp.size()-1;
            while (left <= right) {
                ll mid = left + (right - left)/2;
                if (mp[mid] <= l) left = mid+1;
                else right = mid-1;
            }
            if (left >= mp.size() || mp[left] > r) cout << -1 << " " << -1 <<endl;
            else cout << l << " " << mp[left] << endl;
        }
        cout << endl;
    }
    return 0;
}
