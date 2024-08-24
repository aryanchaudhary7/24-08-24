#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;
        ll ok = ((n%25)/2) + 1;
        string s;
        ll cnt=0;
        char a=97;
        for (ll i=0; i<n; i++) {
            if (cnt == ok) {
                a=97;
            }
            s.push_back(a);
            a++;
            cnt++;
        }
        cout << s << "\n";
    }
    return 0;
}

// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main() { 
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     int tt;
//     cin >> tt;
//     while (tt--) {
//         int n; cin >> n;
        
//     }
//     return 0;
// }