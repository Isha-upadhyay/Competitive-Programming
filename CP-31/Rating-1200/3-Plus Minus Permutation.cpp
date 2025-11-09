#include<bits/stdc++.h>
using namespace std;
 
long long lcm(long long a, long long b){
    return (a / gcd(a, b)) * b; 
}
 
long long calculateSum(long long start, long long end){
    if(start > end) return 0;
    return ((start + end) * (end - start + 1)) / 2; // arthmetic series formula
    
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        long long n , x, y;
        cin>>n>>x>>y;
        
        long long L = lcm(x, y); // lcm for common multiples
        
        long long count1 = (n/x) - (n/L);
        long long count2 = (n/y) - (n/L);
        long long positiveSum = calculateSum(n - count1 + 1, n);
        long long negativeSum = calculateSum(1, count2);
        
        long long ans = positiveSum - negativeSum;
        
        cout << ans << "\n";
    }
    return 0;
}
