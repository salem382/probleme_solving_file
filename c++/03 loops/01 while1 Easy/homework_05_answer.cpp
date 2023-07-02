

/*
 *
 * Test cases
 * Input: 7 11 101 21 201 31 602 78
 *
 * Output: 35.25 301.333
 */

#include<iostream>
using namespace std;

int main() {
	int N;

	cin >> N;

	// Use doubles to: 1) allow any values 2) get average correctly
	double even_sum = 0, odd_sum = 0;
	int even_count = 0, odd_count = 0;

	int cnt = 1;
	while (cnt <= N) {
		double value;
		cin >> value;

		if (cnt % 2 == 0)	// even position
			even_sum += value, even_count++;
		else				// odd position
			odd_sum += value, odd_count++;

		cnt++;
	}

	cout <<odd_sum / odd_count << " " << even_sum / even_count << "\n";

	return 0;
}

/*********************************************************************************/


int main() {
	int n, z , sumE = 0, sumO = 0, odd_n = 0, even_n = 0;
	bool is_ood = true;
	cin >> n;

	while (n > 0) {

        cin >> z;
        if (is_ood) {

            sumO +=z;
            odd_n +=1;
            is_ood = false;
        } else {
            sumE += z;
            even_n +=1;
            is_ood = true;
        }

        n--;
	}

	cout << "average even" << sumE / even_n << "average odd" << sumO / odd_n << endl;
	return 0;
}
