#include <iostream>
using namespace std;

int main() {
	string str;
	cin >> str;

	for (int i = 0; i < (int) str.size(); i++) {
		if (i != 0 && str[i - 1] != str[i]) // new group, split by space
			cout <<" ";
		cout << str[i];
	}
	return 0;
}




int main() {

	string str;

	cin >> str;

	int satr = 0, ind = 0;

	for (int i = 0; i < (int)str.size() ; i++) {

        if (str[i] != str[i + 1]) {
            ind = i;
            for (int i = satr; i <= ind; i++ ) {

                cout << str[i];
            }
            cout << " ";
            satr = i + 1;
        }
	}


	return 0;
}



