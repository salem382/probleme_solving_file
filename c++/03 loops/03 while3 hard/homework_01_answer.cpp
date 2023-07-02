#include<iostream>
using namespace std;

int main() {
	int N;

	cin >> N;

	int pos = 0;

	while (pos < N) {
		string str;
		cin>>str;

		// there are 8 different ways to make 2 letters no in lower/upper cases
		if (str == "no" || str == "No" || str == "nO" || str == "NO" ||
			str == "on" || str == "oN" || str == "On" || str == "ON")
			cout<<str<<" ";

		pos++;
	}
	return 0;
}

*******************



int main() {


    int n , i = 0;
    string word;
    cin >> n;


    while (n > 0) {

        cin >> word;
       if (
            (word[0] == 'n'|| word[0] == 'N' || word[0] == 'o' || word[0] == 'O') &&
            (word[1] == 'n' || word[1] == 'N' || word[1] == 'o' || word[1] == 'O' ) &&
             (word[2] == 0)

           ) {
            cout << "*** " << word << endl;
        }

        n--;
    }
    //
    //&&  &&  word[2] == ""

    return 0;
}


