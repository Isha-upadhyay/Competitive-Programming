#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<pair<long long, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first; // element
        v[i].second = 0; // timestamp
    }

    long long sum = 0;
    for (int i = 0; i < n; i++) sum += v[i].first;

    pair<long long, int> globalVal = {0, -1}; // type 2 value and timestamp

    for (int it = 1; it <= q; it++) {
        int t;
        cin >> t;

        if (t == 1) {
            int ind;
            long long val;
            cin >> ind >> val;
            ind--;

            if (v[ind].second > globalVal.second) {
                sum += val - v[ind].first;
            } else {
                sum += val - globalVal.first;
            }

            v[ind].first = val;
            v[ind].second = it;
        } else {
            long long val;
            cin >> val;
            globalVal = {val, it};
            sum = val * n;
        }

        cout << sum << '\n';
    }

    return 0;
}
