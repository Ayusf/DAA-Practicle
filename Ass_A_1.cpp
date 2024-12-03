// A program to find the number of zeros
#include <bits/stdc++.h>
using namespace std;
int firstzeroindex(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = firstzeroindex(arr, n);
	if (x == -1) {
		cout << "Count of zero is 0" << endl;
	}
	else {
		cout << "count of zero is " << n - x << endl;
	}
	return 0;
}
