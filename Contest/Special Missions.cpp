// codechef


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int T;
	cin >> T;
	while(T--){
	int N, C;
	cin >> N >> C;
	
	vector<int> A(N);
	for(int i=0;i<N;i++) cin >> A[i];
	
	string S;
	cin >> S;
	
	int normal_sum = 0, special_sum = 0;
	for(int i=0;i<N;i++){
	    if(S[i] == '0')normal_sum += A[i];
	    else special_sum += A[i];
	}
	
	int ans = normal_sum;
	
	if(normal_sum >= C){
	    int profit = normal_sum + special_sum - C;
	    ans = max(ans, profit);
	}
	
	cout << ans << "\n";
}
return 0;
	

}
