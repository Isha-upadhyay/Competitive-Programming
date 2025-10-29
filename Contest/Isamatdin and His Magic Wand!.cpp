
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;
 
        bool hasEven = false, hasOdd = false;
        for (auto x : a) {
            if (x % 2 == 0) hasEven = true;
            else hasOdd = true;
        }
 
        if (hasEven && hasOdd)
            sort(a.begin(), a.end());
 
        for (auto x : a) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
