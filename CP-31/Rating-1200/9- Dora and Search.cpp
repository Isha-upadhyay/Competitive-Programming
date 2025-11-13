#include <bits/stdc++.h>

using namespace std;

// Function to check if a value is the minimum or maximum in a set
bool isMinOrMax(int val, set<int> &segEle)
{
	// Check if the value is the minimum element in the set
	if ((*segEle.begin()) == val)
		return true;

	// Check if the value is the maximum element in the set
	if ((*segEle.rbegin()) == val)
		return true;

	// Return false if the value is neither the minimum nor the maximum
	return false;
} //? O(1)

int main()
{
	int t;
	cin >> t; // Read the number of test cases

	while (t--)
	{
		int n;
		cin >> n; // Read the length of the permutation

		vector<int> arr(n);

		// Read the permutation elements
		for (int i = 0; i < n; i++)
			cin >> arr[i]; //? O(N)

		// Create a set containing all elements of the permutation
		set<int> segEle(arr.begin(), arr.end()); //? O(N log N)

		int i = 0, j = n - 1; //! l, r

		// Iterate to find the subsegment
		while (i < j)
		{
			// Check if the element at the start is min or max
			if (isMinOrMax(arr[i], segEle)) //! al
			{
				segEle.erase(arr[i]); //? O(log N)
				i++;
				continue;
			}

			// Check if the element at the end is min or max
			if (isMinOrMax(arr[j], segEle)) //! ar
			{
				segEle.erase(arr[j]); //? O(log N)
				j--;
				continue;
			}

			// Break if neither end is min or max
			break;
		} //? O(N log N)

		// Output the result
		if (i < j)
		{
			cout << (i + 1) << " " << (j + 1) << "\n";
		}
		else
		{
			cout << "-1\n";
		}
	}

	return 0;
}

//! Total time complexity : O(N log N)
//! Total space complexity : O(N)
