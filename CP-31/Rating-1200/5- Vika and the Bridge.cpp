#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i]; // Read colors of each plank

        // Step 1: Store indices of each color
        vector<vector<int>> colours(k + 1);
        for (int i = 1; i <= k; i++)
            colours[i].push_back(0); // Start point before bridge

        for (int i = 0; i < n; i++)
            colours[v[i]].push_back(i + 1); // Plank index (1-based)

        for (int i = 1; i <= k; i++)
            colours[i].push_back(n + 1); // End point after bridge

        int ans = INT_MAX;

        // Step 2: Calculate max gap for each color
        for (int i = 1; i <= k; i++) {
            priority_queue<int> jumps;

            // Find all gaps between same-color planks
            for (int j = 0; j < (int)colours[i].size() - 1; j++) {
                int gap = colours[i][j + 1] - colours[i][j] - 1;
                jumps.push(gap);
            }

            // Take the largest gap
            int max_gap = jumps.top();
            jumps.pop();

            // Step 3: Split the largest gap into two smaller parts
            if (max_gap % 2 == 0) {
                jumps.push(max_gap / 2);
                jumps.push((max_gap / 2) - 1);
            } else {
                jumps.push(max_gap / 2);
                jumps.push(max_gap / 2);
            }

            // Step 4: Take the new largest gap as candidate answer
            ans = min(ans, jumps.top());
        }

        cout << ans << "\n";
    }

    return 0;
}
