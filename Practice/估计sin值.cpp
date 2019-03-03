#include<iostream>
#include<cmath>
using namespace std;
void p12()
{
	float a,b,fenmu,fenzi;
	double num,jiecheng;
	cin >> a;
	b = 0.0;
	int n = 1;//计算循环次数的n
	fenmu = 1;//分母	
	fenzi = a;//分子
	jiecheng = 1;//阶乘的结果
	while (fabs(fenzi / fenmu) > 1e-10)//当数值大于10^-6时进行以下函数
	{
		fenzi = pow(a, 2 * n - 1);//分子=a^(2n-1)
		num = 2 * n - 1;//阶乘的中间数
		jiecheng = 1;
		while (num>1)
		{
			jiecheng = num * jiecheng;
			num--;
		}//当num大于1就执行
		fenmu = jiecheng;
		switch (abs(n%2))
			{
			case 0:b = b - (fenzi / fenmu); break;
			case 1:b = b + (fenzi / fenmu); break;
			}
		n = n + 1;
	}
	cout << b << endl;
	system("pause");
}

