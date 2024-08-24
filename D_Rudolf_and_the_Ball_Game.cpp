#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m, x;
        cin >> n >> m >> x;
        vector<pair<int, char>> v(m);
        for (int j = 0; j < m; ++j) {
            int r;
            char c;
            cin >> r >> c;
            v.push_back(make_pair(r, c));
        }
        set<int> pp;
        pp.insert(x);
        for (const auto& it : v) {
            int r = it.first;
            char c = it.second;
            set<int> s;
            for (int p : pp) {
                int ok;
                if (c == '0') {
                    ok = (p + r) % n;
                    if (ok == 0) {
                        ok = n;
                    }
                } 
                else if (c == '1') {
                    ok = (p - r + n) % n;
                    if (ok == 0) {
                        ok = n;
                    }
                } 
                else {
                    int clock = (p + r) % n;
                    if (clock == 0) {
                        clock = n;
                    }
                    int anti = (p - r + n) % n;
                    if (anti == 0) {
                        anti = n;
                    }
                    s.insert(clock);
                    s.insert(anti);
                    continue;
                }
                s.insert(ok);
            }
            pp = s;
        }
        cout << pp.size() << endl;
        for (int p : pp) {
            cout << p << " ";
        }
        cout << endl;
    }
    return 0;
}