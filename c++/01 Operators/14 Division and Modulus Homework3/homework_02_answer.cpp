

int main()
{
    int num ,y, m , d;

    cin >> num;

    y = num / 360;
    m = (num % 360) / 30;
    d = num - ((y * 360) + ( m * 30));

    cout << y << " " << m << " " << d << endl;


	return 0;
}
