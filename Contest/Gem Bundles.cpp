//codechef


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int T;
	cin >> T;
	while(T--){
	    int R, B, G;
	    cin >> R >> B  >> G;
	    
	    int bundles = min({R, B, G});
	    int total = bundles * 10;
	    
	    R -= bundles;
	    B -= bundles;
	    G -= bundles;
	    
	    total += (R + B + G) * 3;
	    cout << total << endl;
	}
	
	return 0;
	
	

}
