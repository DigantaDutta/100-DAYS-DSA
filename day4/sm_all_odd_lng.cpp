#include <bits/stdc++.h>
using namespace std;

int OddLengthSum(vector<int>& arr)
{
	int sum = 0;

	int l = arr.size();

	for (int i = 0; i < l; i++) {

		for (int j = i; j < l; j += 2) {

			for (int k = i; k <= j; k++) {

				sum += arr[k];
			}
		}
	}

	return sum;
}

int main()
{
	vector<int> arr = { 1, 5, 3, 1, 2 };

	cout << OddLengthSum(arr);

	return 0;
}
