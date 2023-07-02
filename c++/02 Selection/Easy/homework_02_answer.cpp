#include<iostream>
using namespace std;
int main()
{
    int a, b ,c;
    int minN, medN , maxN;

    cin >> a >> b >> c; // 3 2 1

    minN = a;
    maxN = a;


    if (b < minN){
     minN = b;

    }// 2
    if (c < minN) {
        minN = c;
    }

    if (b > maxN)
        maxN = b;
    if (c > maxN)
        maxN = c;

    if (a != minN && a != maxN )
        medN = a;
    else if (b != minN && b != maxN )
        medN = b;
    else
        medN = c;


    cout << minN << " " << medN << " " << maxN << endl;

	return 0;
}
