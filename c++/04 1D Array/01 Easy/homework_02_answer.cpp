// By Basel Bairkdar https://www.facebook.com/baselbairkdar

#include<iostream>
using namespace std;

int main() {

	const int N = 199;	// < 200 = 199 elements

	int n, a[N], mn = 10000, mx = -1;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < mn) {
			mn = a[i];
		}
		if (a[i] > mx) {
			mx = a[i];
		}
	}

	for (int i = 0; i < n; i++) {
		if (a[i] == mn)
			a[i] = mx;
		else if (a[i] == mx)
			a[i] = mn;
	}

	for (int i = 0; i < n; i++) {
		if (i)
			cout << " ";
		cout << a[i];
	}
	return 0;
}

/*
Note: you shouldn't use if/else to compute min and max. 2 seperate if conditions

Testing:
4
4 3 2 1
1 3 2 4

4
1 2 3 4
4 2 3 1




To submit for: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
Use these ones

const int N = 1000;
int n, a[N], mn = 1e6, mx = -1e6;
*/


