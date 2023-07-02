#include<iostream>
using namespace std;
int main()
{
    int num ;
    cin >> num;

    int last_three = num % 10000;
    int a = last_three / 100;
    int last_two =  num % 100;
    int b = (last_two / 10);
    int c = num % 10;

    cout << a + b + c << endl;

	return 0;
}
