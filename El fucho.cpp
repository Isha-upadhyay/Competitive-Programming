//Codeforces Round 1056 (Div. 2)

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
        // humko sirf n ka use hai, sequence pairing, wins-loss tracking etc. nahi lena hai
        // formula:
        long long totalMatches = 2LL * (n - 1);
        cout << totalMatches << "\n";
    }
 
    return 0;
}
