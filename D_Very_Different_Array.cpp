#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n,m;
        cin >> n >> m;
        vector<int> v1(n);
        vector<int> v2(m);
        for (auto& x : v1) {
            cin >> x;
        }
        for (auto& x : v2) {
            cin >> x;
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end(), greater<int>());
        // for (auto x : v1) {
        //     cout << x << " ";
        // }
        // cout << endl;
        // for (auto x : v2) {
        //     cout << x << " ";
        // }
        // cout << endl;
        int p1=0, p2= v2.size()-1;
        int pt1=0, pt2= v1.size()-1;
        ll diff = 0;
        while (pt1 <= pt2) {
            if (p1 != p2) {
                diff += abs(v1[pt1] - v2[p1]);
                cout<< abs(v1[pt1] - v2[p1])<< " ";
                pt1++;
                p1++;
                diff += abs(v1[pt1] - v2[p1]);
                cout<<abs(v1[pt1] - v2[p1]) << " ";
                pt2--;
                p2--;
            }
            else {
                diff += abs(v1[pt1] - v2[p1]);
                cout<<abs(v1[pt1] - v2[p1]) << " ";
                break;
            }
        }
        cout<< diff << "\n";
    }
    return 0;
}
