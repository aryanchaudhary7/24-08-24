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


// int main() {
//     fast;
//     ll n;
//     cin >> n;
//     vector<char> s(n), t(n);
//     for (auto &it : s) cin >> it;
//     for (auto &it : t) cin >> it;
//     int cnt=0;
//     for (ll i=1; i<=n; i++) {
//         if (s[i-1] != t[i-1]) {
//             s[i-1] = t[i-1];
//             s[i] = t[i];
//             cnt++;
//         }
//     }
//     for (auto it : s) cout << it << " ";
//     cout << endl;
//     if (s == t) cout << cnt << endl;
//     else cout << -1 << endl;
//     return 0;
// }


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int white_count = count(S.begin(), S.end(), 'W');
    int black_count = count(S.begin(), S.end(), 'B');

    // If the number of white stones is not equal to the number of black stones, it's impossible
    if (white_count != black_count) {
        cout << -1 << endl;
        return 0;
    }

    int operations = 0;
    int left_pointer = 0;
    int right_pointer = N - 1;

    while (left_pointer < right_pointer) {
        // Find the first mismatch from the left
        while (left_pointer < N && S[left_pointer] == 'W') {
            left_pointer++;
        }
        // Find the first mismatch from the right
        while (right_pointer >= 0 && S[right_pointer] == 'B') {
            right_pointer--;
        }
        // If the pointers have crossed, break out of the loop
        if (left_pointer >= right_pointer) {
            break;
        }
        // Swap the mismatched stones
        swap(S[left_pointer], S[right_pointer]);
        operations++;
    }

    cout << operations << endl;
    return 0;
}
