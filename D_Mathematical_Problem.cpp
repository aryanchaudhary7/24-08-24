// // #pragma GCC optimize("Ofast")
// // #pragma GCC optimize("no-stack-protector")
// // #pragma GCC optimize("unroll-loops")
// // #pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
// // #pragma GCC optimize("fast-math")
// // #pragma GCC optimize("Ofast")
// // #pragma GCC optimize("unroll-loops")
// // #pragma GCC target("avx,avx2,fma")
// // #include <bits/stdc++.h>
// // using namespace std;
// // #define pi (3.141592653589)
// // #define mod 1000000007
// // #define pb push_back
// // #define is insert
// // #define mk make_pair
// // #define ff first
// // #define ss second
// // #define all(x) x.begin(), x.end()
// // #define min3(a, b, c) min(c, min(a, b))
// // #define min4(a, b, c, d) min(d, min(c, min(a, b)))
// // #define rfr(n) for(ll i=n-1;i>=0;i--)
// // #define rep1(i,a,b) for(long long i=a;i<=b;i++)
// // #define fr(n) for(long long i=0;i<n;i++)
// // #define nesfr(x,y) for(long long i=0;i<x;i++)for(long long j=0;j<y;j++)
// // #define rep(i,a,b) for(long long i=a;i<b;i++)
// // #define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
// // typedef long long int ll;
// // typedef long double ld;
// // typedef vector<ll> vi;
// // #define nl cout << "\n"
// // const unsigned int M = 1000000007;
// // const int  N = 2e5 + 5 ;

// // string sml(const string& s) {
// //     int n = s.size();
// //     string min_substring = "";

// //     for (int i = 0; i < n - 1; ++i) {
// //         string substring = s.substr(i, 2);
// //         if ((substring[0] > '1' && substring[0] <= '9') || (substring[1] > '1' && substring[1] <= '9')) {
// //             if (min_substring == "" || substring < min_substring) {
// //                 min_substring = substring;
// //             }
// //         }
// //     }

// //     return min_substring;
// // }

// // int main() {
// //     fast;
// //     ll t=1;
// //     cin>>t;
// //     while(t--) {
// //         ll n;
// //         cin >> n;
// //         string s;
// //         cin >> s;
// //         if (n == 2) {
// //             if (s[0] == '0') cout << s[1] << endl;
// //             else if (s == "00") cout << 0 << endl;
// //             else cout << s << endl;
// //         }
// //         else {
// //             auto x = find(s.begin(), s.end(), '0');
// //             if (x != s.end() && s.size() > 3) {
// //                 cout << 0 << endl;
// //             }
// //             else {
// //                 int ok = sml(s);
// //                 for (ll i=0; i<n; i++) {
// //                     if (s[i] + s[i+1] == ok) {
// //                         i += 2;
// //                     }
// //                     else if (s[i] != '1') {
// //                         ok += stoi(s[i]);
// //                     }
// //                 }
// //                 cout << ok << endl;
// //             }
// //         }
// //     }
// //     return 0;
// // }
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
// typedef vector<int> vi;
// typedef vector<ll> vll;
// #define nl cout << "\n"
// const unsigned int M = 1000000007;
// const int  N = 2e5 + 5 ;


// ll my_ans(ll n, const string& s) {
//     if (s.find('0') != string::npos) {
//         return 0;
//     }
    
//     ll ans = INT_MAX;
    
//     for (ll i = 0; i < n - 1; ++i) {
//         ll sm = 0;
        
//         for (ll j = 0; j < i; ++j) {
//             if (s[j] != '1') {
//                 sm += (s[j] - '0');
//             }
//         }
        
//         ll nx = (s[i] - '0') * 10 + (s[i + 1] - '0');
        
//         sm += nx;
        
//         for (ll k = i + 2; k < n; ++k) {
//             if (s[k] != '1') {
//                 sm += (s[k] - '0');
//             }
//         }
        
//         ans = min(ans, sm);
//     }
    
//     return ans;
// }

// signed main() {
//     fast;
//     cin.tie(nullptr);
//     cout.tie(nullptr);
    
//     ll tc;
//     cin >> tc;
    
//     while (tc--) {
//         ll n;
//         cin >> n;
//         string s;
//         cin >> s;
//         if (s == "00") cout << 0 << endl;
//         else if (s[0] == '0' && n == 2) cout << s[1] << endl;
//         else if (n==2) cout << s << endl;
//         else if (n==3 && s[1] == '0') cout << s[0] << endl;
//         else cout << my_ans(n, s) << endl;
//     }
    
//     return 0;
// }



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
typedef vector<int> vi;
typedef vector<ll> vll;
#define nl cout << "\n"
const unsigned int M = 1000000007;
const int N = 2e5 + 5;

ll my_ans(ll n, const string& s) {
    if (s.find('0') != string::npos) {
        return 0;
    }
    
    ll ans = INT_MAX;
    
    for (ll i = 0; i < n - 1; ++i) {
        ll sm = 0;
        
        for (ll j = 0; j < i; ++j) {
            if (s[j] != '1') {
                sm += (s[j] - '0');
            }
        }
        
        ll nx = (s[i] - '0') * 10 + (s[i + 1] - '0');
        
        sm += nx;
        
        for (ll k = i + 2; k < n; ++k) {
            if (s[k] != '1') {
                sm += (s[k] - '0');
            }
        }
        
        ans = min(ans, sm);
    }
    
    return ans;
}

signed main() {
    fast;
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    ll tc;
    cin >> tc;
    
    while (tc--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        
        if (s == "00") cout << 0 << endl;
        else if (s[0] == '0' && n == 2) cout << s[1] << endl;
        else if (n == 2) cout << s << endl;
        else if (n == 3 && s[1] == '0') cout << s[0] << endl;
        else cout << my_ans(n, s) << endl;
    }
    
    return 0;
}
