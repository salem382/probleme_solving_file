#include<iostream>
using namespace std;

int main() {
	int N;

	cin >> N;

	int number = 0;

	while (N > 0) {
		int last_digits = N % 10;               // 2
		N /= 10;	// remove last digit   //

		number = number * 10 + last_digits; //321
	}
	cout << number << " " << number * 3 << "\n";

	return 0;
}
