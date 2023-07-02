#include<iostream>
using namespace std;

// test
// aaa aaaaaaa	NO
// aa AA NO

int main() {
	string big_str, small_str;
	cin >> big_str >> small_str;

	if (small_str.size() > big_str.size()) {
		cout << "NO\n";
		return 0;
	}

	// Compare the end of the small with the large
	int big_end = (int)big_str.size()-1;
	int small_end = (int) small_str.size()-1;
	for (int i = 0; i < (int) small_str.size(); i++) {
		if (big_str[big_end--] != small_str[small_end--]) {
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";

	return 0;
}


  int main() {


   string st1, st2;

   cin >> st1 >> st2;

   int min_s = st1.size();

   if (st2.size() < min_s)
        min_s = st2.size();

   string ans = "YES";

   int c = 1;
   for (int i = st1.size() - 1; i > st1.size() -  min_s; i--) {

        if (st1[i] != st2[st2.size() - c]) {

           ans = "No";
        }
        c --;
   }


   cout << ans << endl;

	return 0;
}
