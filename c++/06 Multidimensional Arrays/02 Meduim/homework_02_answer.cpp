#include<iostream>
using namespace std;

int main() {
	int arr[100][100];
	int n, m;

	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> arr[i][j];

	//{ d, r,  u,  l, ul, dr, ur, dl };
	int di[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
	int dj[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			bool valid_mountain = true;	// if no neighbors, will remain true!

			// check the 8 neighbors using dir array
			for (int d = 0; d < 8 && valid_mountain; ++d) {
				int ni = i + di[d];
				int nj = j + dj[d];

				if (ni < 0 || ni >= n || nj < 0 || nj >= m)
					continue;	// outside borders

				if (arr[i][j] <= arr[ni][nj]) {
					valid_mountain = false;
					break;
				}
			}

			if (valid_mountain)
				cout << i << " " << j << "\n";
		}
	}

	return 0;
}
/**
 important test
 1 1
 1

 answer
 0 0
 */


int main() {

	int arr[3][3] = {
        {8, 6, 1},
        {3, 2, 9},
        {1, 6, 4}
	};



	int n = 3, m = 3;
	int pX = 0, pY = 0;





	for (int rows = 0; rows < n; rows++) {

        for (int cols = 0; cols < m; cols++) {

                cout << "=======================" << endl;

               bool is_ok = true;


            for (int i = rows - 1; i <= rows + 1; i++) {

                for (int j = cols - 1; j <= cols + 1 ; j++) {

                    if (j > m - 1 || i > n - 1 || (i == rows && j == cols) || i < 0 || j < 0)
                        continue;



                        if (arr[rows][cols] <= arr[i][j]) {

                                is_ok = false;
                        }
                        cout << arr[rows][cols] << " <= " << arr[i][j] << "  =  "<< is_ok << endl;
                }
            }


            if (is_ok) {

                cout << " result  ==     ";
                cout << rows << " " << cols << endl;
            }

            cout << "=======================" << endl;
        }
	}




	return 0;
}
