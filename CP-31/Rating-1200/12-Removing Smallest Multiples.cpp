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

        string s;
        cin >> s;

        long long ans = 0;

    
        vector<bool> removed(n + 1, false);

     
        for (int k = 1; k <= n; k++) {
           
            for (int j = k; j <= n; j += k) {

              
                if (s[j - 1] == '1')
                    break;

         
                if (removed[j])
                    continue;

        
                removed[j] = true;
                ans += k;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
