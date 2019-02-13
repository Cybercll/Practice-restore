#include <iostream>
#include<cmath>
using namespace std;
void main()
{
	int i = 1;
	double x, sx = 0, t;
	cout << "plz a data:";
	cin >> x;
	t = x;
	do
	{
		sx += t;
		t = -t * x*x / (2 * i*(2 * i + 1));
		i++;
	} while (fabs(t) >= 1e-6);
	cout << "sx=" << sx << endl;
	system("pause");
}
