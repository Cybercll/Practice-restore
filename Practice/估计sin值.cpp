#include<iostream>
#include<cmath>
using namespace std;
void p10()
{
	float a,b,fenmu,fenzi;
	int num,jiecheng;
	cin >> a;
	b = 0.0;
	int n = 1;
	fenmu = 1;
	fenzi = a;
	jiecheng = 1;
	while (fenzi / fenmu > 1e-6)
	{
		fenzi = pow(a, 2 * n - 1);
		num = 2 * n - 1;
		while (num>1)
		{
			jiecheng = num * jiecheng;
			num--;
		}
		fenmu = jiecheng;
		switch (abs(n%2))
			{
			case 0:b = b - fenzi / fenmu; break;
			case 1:b = b + fenzi / fenmu; break;
			}
		n = n + 1;
	}
	cout << b << endl;
	system("pause");
}

