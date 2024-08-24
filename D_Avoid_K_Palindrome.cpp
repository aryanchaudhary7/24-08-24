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
//     ll n,k;
//     cin >> n >> k;
//     string s;
//     cin >> s;
    
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

bool isPalindrome(const string &str, int start, int len) {
    for (int i = 0; i < len / 2; ++i) {
        if (str[start + i] != str[start + len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;

    int q = count(S.begin(), S.end(), '?');
    int total_combinations = 1 << q;  
    int valid_count = 0;

    for (int mask = 0; mask < total_combinations; ++mask) {
        string T = S;
        int q_index = 0;

        // Replace '?' based on the current mask
        for (int i = 0; i < N; ++i) {
            if (T[i] == '?') {
                T[i] = (mask & (1 << q_index)) ? 'B' : 'A';
                ++q_index;
            }
        }

        // Check if T is a good string
        bool is_good = true;
        for (int i = 0; i <= N - K; ++i) {
            if (isPalindrome(T, i, K)) {
                is_good = false;
                break;
            }
        }

        if (is_good) {
            valid_count = (valid_count + 1) % MOD;
        }
    }

    cout << valid_count << endl;
    return 0;
}
