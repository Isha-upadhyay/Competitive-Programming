#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t; 

	while (t--)
	{
		long long n;
		cin >> n; 

		
		if (n < 4 || n % 2 == 1)
			cout << -1 << '\n'; 
		else
		{
			
            long long min_buses = (n + 5) / 6; 
            long long max_buses = n / 4;      

			
			cout << min_buses << " " << max_buses << '\n';
		}
	}

	return 0;
}

// Time Complexity (TC): O(1)
// Space Complexity (SC): O(1)
