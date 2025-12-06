// Hume diya hai:
// T test cases
// Har test case me:
// n = array size
// array ke n integers
// sum = required subset sum

// 👉 Hume count karna hai ki kitne subsets (combinations) aise hain jinka total sum exactly given sum ho.
// ⚠️ Result bohot bada ho sakta hai → answer mod 1e9+7 me dena hai.

// Test case 1:
// Array = [2,3,5,6,8,10]
// Sum = 10
// Possible subsets:
// (2,3,5)
// (2,8)
// (10)
// So answer = 3

// 🔥 Test case 2:
// Array = [1,2,3,4,5]
// Sum = 10
// Possible subsets:
// (1,2,3,4)
// (2,3,5)
// (1,4,5)
// Answer = 3


#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        int sum;
        cin >> sum;

        vector<long long> dp(sum + 1, 0);
        dp[0] = 1; // empty subset

        for (int x : arr) {
            for (int s = sum; s >= x; s--) {
                dp[s] = (dp[s] + dp[s - x]) % MOD;
            }
        }

        cout << dp[sum] % MOD << endl;
    }

    return 0;
}
