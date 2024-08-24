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
//         ll n,x;
//         cin >> n >> x;

//     }
//     return 0;
// }


#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;

int countValidTriplets(vector<int>& nums, int x, int n) {
    int len = nums.size();
    int count = 0;

    // Use three nested loops to generate all possible triplets
    for (int i = 0; i < len; ++i) {
        for (int j = i + 1; j < len; ++j) {
            for (int k = j + 1; k < len; ++k) {
                int a = nums[i], b = nums[j], c = nums[k];
                int sum = a + b + c;
                int productSum = a * b + a * c + b * c;
                
                if (sum <= x && productSum <= n) {
                    ++count;
                }
            }
        }
    }

    return count;
}

int main() {
    fast;
    ll t = 1;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        ll numCount;
        cin >> numCount;
        vector<int> nums(numCount);
        for (int i = 0; i < numCount; i++) {
            cin >> nums[i];
        }

        int result = countValidTriplets(nums, x, n);
        cout << result << "\n";
    }
    return 0;
}
