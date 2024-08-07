#include <bits/stdc++.h>
using namespace std;

int findSubarraySum(int arr[], int n, int sum)
{
	
	unordered_map<int, int> prevSum;
	int res = 0;

	// Sum of elements so far.
	int currSum = 0;

	for (int i = 0; i < n; i++) {

		// Add current element to sum so far.
		currSum += arr[i];

		
		if (currSum == sum)
			res++;

		
		if (prevSum.find(currSum - sum) != prevSum.end())
			res += (prevSum[currSum - sum]);

		// Add currsum value to count of different values of
		// sum.
		prevSum[currSum]++;
	}

	return res;
}

int main()
{
	int arr[] = { 10, 2, -2, -20, 10 };
	int sum = -10;
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << findSubarraySum(arr, n, sum);
	return 0;
}
