#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Size of array
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        // If only one element -> contrast = 0, answer = 1
        if (n == 1) {
            cout << 1 << "\n";
            continue;
        }

        vector<int> b; // subsequence b
        b.push_back(a[0]);
        b.push_back(a[1]);

        // Process remaining elements
        for (int i = 2; i < n; i++) {
            int sz = b.size();
            int x = b[sz - 2] - b[sz - 1]; // diff between last two
            int y = b[sz - 1] - a[i];       // diff between last and new

            if (x > 0) { // decreasing trend
                if (y > 0)
                    b[sz - 1] = a[i]; // still decreasing, replace
                else if (y < 0)
                    b.push_back(a[i]); // direction changed
            } else { // increasing trend
                if (y < 0)
                    b[sz - 1] = a[i]; // still increasing, replace
                else if (y > 0)
                    b.push_back(a[i]); // direction changed
            }
        }

        int result = b.size();
        if (b.size() >= 2 && b[0] == b[1])
            result--; // remove duplicate start if both same

        cout << result << "\n";
    }

    return 0;
}
