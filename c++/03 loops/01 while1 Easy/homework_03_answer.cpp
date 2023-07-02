/*
 * 
 */

#include<iostream>
using namespace std;

int main() {
	int N;

	cin >> N;

	int row = 1;

	while (row <= N) {
		int stars_count = 1;

		while (stars_count <= row) {
			cout << '*';
			++stars_count;
		}
		cout << "\n";
		row++;
	}

	return 0;
}
/****************************************************************/
int main()
{
   int n ,x, z;

   cin >> n;

   x = n;


   while (n > 0) {

   z = n - 1;
        while (z < x) {

            cout << "*";
            z++;
        }

        n -=1;
        cout << endl;
   }


	return 0;
}


