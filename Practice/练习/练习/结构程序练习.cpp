#include<iostream> ///随机产生两个整数，输入其和，判断输入是否正确。
#include<ctime>
using namespace std;
void p5()
{
	int a, b, c, d = 0;
	srand((unsigned int)(time(NULL)));//使rand函数的随机数种子随着时间变化
	a = rand()%100;
	b = rand()%100;
	d = a + b;
	cout << "a=" << a << endl << "b=" << b << endl;
	cout << "sum is" << endl;
	cin >> c;
	if (c == d)
	{cout << "You're right!";}
	else
	{cout << "You're not right";}
	cout << endl;
	system("pause");
}
