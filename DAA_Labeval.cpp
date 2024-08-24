#include<bits/stdc++.h>
using namespace std;
int rt(vector<int> val, vector<int> weight, int w) {
    vector<pair<double, int>> ratio;
    int n = val.size();
    for (int i = 0; i < n; i++) {
        double r = (double)val[i] / weight[i];
        ratio.push_back({r, weight[i]});
    }
    sort (ratio.begin(), ratio.end(), greater<pair<double, int>>());
    double total = 0.0;
    int cw = 0;
    for (int i=0; i<n; i++) {
        if (cw + ratio[i].second <= w) {
            total += val[i];
            cw += ratio[i].second;
        }
        else {
            double fraction = (double)(w - cw) / ratio[i].second;
            total += fraction * val[i];
            break;
        }
    }
    return total;
}
int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, w; 
    cout << "Enter the number of items: "<<endl;
    cin >> n;
    cout << "Enter the total weight of cargo: " << endl;
    cin >> w;
    cout << "Enter the values: " << endl;
    vector<int> val(n);
    for (auto &it : val) {
        cin >> it;
    }
    cout << "Enter the weights: " << endl;
    vector<int> weight(n);
    for (auto &it : weight) {
        cin >> it;
    }
    int ans = rt(val, weight, w);
    cout<<ans<<endl;
    return 0;
}