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
//     ll t=1;
//     cin>>t;
//     while(t--) {
//         ll n,m; cin >> n >> m;
//         vector<vector<char>> v(n+1, vector<int>(m+1));
//         for (ll i=1; i<=n; i++) {
//             for (ll j=1; j<=m; j++) {
//                 cin >> v[i][j];
//             }
//         } 
//         for (ll i=1; i<=n; i++) {
//             for (ll j=1; j<=m; j++) {
//                 if (v[i][j] == '#') {
//                     cout << j << " ";
//                 }
//             }
//         } 
//         for (ll j=1; j<=m; j++) {
//             for (ll i=1; i<=n; i++) {
//                 if (v[j][i] == '#') cout << i << endl;
//             }
//         } 
//     }
//     return 0;
// }



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
//     ll t=1;
//     cin>>t;
//     while(t--) {
//         ll n,m; cin >> n >> m;
//         vector<vector<char>> v(n+1, vector<char>(m+1)); // changed vector<int> to vector<char>
//         for (ll i=1; i<=n; i++) {
//             for (ll j=1; j<=m; j++) {
//                 cin >> v[i][j];
//             }
//         } 
//         ll a,b;
//         for (ll i=1; i<=n; i++) {
//             for (ll j=1; j<=m; j++) {
//                 if (v[i][j] == '#') {
//                     b = j;
//                     break;
//                 }
//             } // added newline after each row
//         } 
//         for (ll j=1; j<=m; j++) {
//             for (ll i=1; i<=n; i++) {
//                 if (v[j][i] == '#'){
//                      a = i;
//                      break;} // changed v[j][i] to v[i][j]
//             }
//         } 
//         cout << a << " " << b << endl;
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
typedef vector<ll> vi;
#define nl cout << "\n"
const unsigned int M = 1000000007;
const int  N = 2e5 + 5 ;


int main() {
    fast;
    ll t=1;
    cin>>t;
    while(t--) {
        ll n,m; cin >> n >> m;
        vector<vector<char>> v(n+1, vector<char>(m+1)); 
        for (ll i=1; i<=n; i++) {
            for (ll j=1; j<=m; j++) {
                cin >> v[i][j];
            }
        } 
        ll a=-1,b=-1;
        for (ll i=1; i<=n; i++) {
            for (ll j=1; j<=m; j++) {
                if (v[i][j] == '#') {
                    a = j;
                    break;
                }
            } 
            if(a!=-1) break;
        } 
        for (ll j=1; j<=m; j++) {
            for (ll i=1; i<=n; i++) {
                if (v[i][j] == '#'){
                     b = i;
                     break;} 
            }
            if(b!=-1) break;
        } 
        cout << b << " " << a << endl;
    }
    return 0;
}