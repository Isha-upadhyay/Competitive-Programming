#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, m;
        cin >> n >> m; // n = number of cards, m = numbers on each card

        // Rotated storage: each column will store all n players' values
        vector<vector<long long>> v(m, vector<long long>(n));

        // Input all cards (rotated way)
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < m; i++) {
                cin >> v[i][j]; // store card j's ith number
            }
        }

        // Sort each column (so that we can calculate total abs difference efficiently)
        for (int i = 0; i < m; i++) {
            sort(v[i].begin(), v[i].end());
        }

        long long ans = 0; // total chips won across all games

        // Apply formula for total abs diff sum
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // Each element contributes differently based on its position
                ans -= (v[i][j] * (n - j - 1)); // subtract for elements after it
                ans += (v[i][j] * j);           // add for elements before it
            }
        }

        cout << ans << "\n"; // print total winnings
    }

    return 0;
}
