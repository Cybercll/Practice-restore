#include <iostream> //输入5个数 求最大最小
using namespace std;
void p7()
{
	cout << "Plz enter 1st number" << endl;
	int i, max, min, x = 1;
	i = max = min = x = 1;
	cin >> x;
	max = min = x;
	while (i < 5) 
	{
		i =i+1;
		cout << "Plz enter " << i << "st number" << endl;
		cin >> x;
		max = x > max ? x : max;
		min = x < min ? x : min;
	}
	cout << "max is " << max << endl;
	cout << "min is " << min << endl;
	system("pause");
}