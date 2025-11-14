#include <bits/stdc++.h>
using namespace std;

// Binary search function
// Returns largest index i such that pmax[i] <= val
int binSearch(vector<long long> &pmax, int n, long long val) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (pmax[mid] <= val) {
            ans = mid;       // valid step found
            low = mid + 1;   // try to find bigger index
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;  // number of test cases

    while (t--) {
        int n, q;
        cin >> n >> q; // number of steps and queries

        vector<long long> steps(n), query(q);

        for (int i = 0; i < n; i++) cin >> steps[i]; // input step heights
        for (int i = 0; i < q; i++) cin >> query[i]; // input leg lengths

        // Prefix sum & prefix max arrays
        vector<long long> psum(n), pmax(n);
        psum[0] = steps[0];
        pmax[0] = steps[0];

        for (int i = 1; i < n; i++) {
            psum[i] = psum[i - 1] + steps[i];         // cumulative height
            pmax[i] = max(pmax[i - 1], steps[i]);     // max step so far
        }

        // Answer queries
        for (int i = 0; i < q; i++) {
            long long k = query[i];
            int idx = binSearch(pmax, n, k);

            if (idx == -1)
                cout << 0 << " ";
            else
                cout << psum[idx] << " ";
        }
        cout << "\n";
    }

    return 0;
}
