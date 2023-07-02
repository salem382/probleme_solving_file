#include<iostream>
using namespace std;

int main() {
	string big_str, small_str;
	cin >> big_str >> small_str;

	if (small_str.size() > big_str.size()) {
		cout << "NO\n";
		return 0;
	}

	// Keep match letters in order from the big in the small
	int next_to_match = 0;
	for (int i = 0; i < (int) big_str.size(); ++i) {
		if (big_str[i] == small_str[next_to_match]) {
			++next_to_match;
			if (next_to_match == (int)small_str.size()) {
				cout << "YES\n";
				return 0;
			}
		}
	}
	cout << "NO\n";

	return 0;
}










int main() {


   string str2, str1;

   cin >> str1 >> str2;



   

   for (int i = 0; i < (int)str2.size() ; i++) {

        is_ok = false;
        for (int j = 0; j < (int) str1.size(); j++) {

            if (str2[i] == str1[j] && j > index) {

                is_ok = true;
                index = j;
            }
        }
        if (!is_ok) {

            cout << "No" << endl;
            return 0;
        }
   }

   if (is_ok)
    cout << "Yes" << endl;

	return 0;
}

