//codechef 
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int x;
	cin >> x;
	
	int prize = 1000 * (1 << (4 - x));
	
	cout << prize << endl;
	return 0;

}

