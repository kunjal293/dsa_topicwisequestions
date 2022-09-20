#include<iostream>

using namespace std;

string spellingMap[] = { "zero", "one", "two", "three",
                         "four", "five", "six", "seven",
                       	 "eight", "nine"};

void spell(int n) {

	// base case
	if(n == 0) {

		return;
	}


	// recursive case

	// ask your friend to print the spelling of (n/10)
	spell(n/10);

	// int digit = n%10;
	// string spelling = spellingMap[digit]
	// cout << spelling << " ";

	cout << spellingMap[n%10] << " ";

}

int main() {

	int n ;
	cin>>n;

	spell(n);

	return 0;
}
