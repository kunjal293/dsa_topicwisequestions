#include<iostream>

using namespace std;

int binarySearch(int* arr, int t, int s, int e) {

	// base case
	if(s > e) {

		return -1;
	}

	// recursive case

	int m = s + (e-s)/2;
	if(arr[m] == t) {

		return m;
	} else if(arr[m] > t) {

		return binarySearch(arr, t, s, m-1);
	} else {

		return binarySearch(arr, t, m+1, e);
	}

}

int main() {

	int arr[] = {10, 20, 30, 40, 50, 60};
	int n = sizeof(arr) / sizeof(int);
	int t = 100;

	cout << binarySearch(arr, t, 0, n-1) << endl;

	return 0;
}

