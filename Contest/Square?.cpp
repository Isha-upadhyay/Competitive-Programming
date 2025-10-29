
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        vector<int> sticks(4);
        for (int i = 0; i < 4; i++) cin >> sticks[i];
        sort(sticks.begin(), sticks.end());
        if (sticks[0] == sticks[3])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
