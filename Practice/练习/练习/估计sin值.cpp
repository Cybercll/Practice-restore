#include<iostream>
#include<cmath>
using namespace std;
void p12()
{
	float a,b,fenmu,fenzi;
	double num,jiecheng;
	cin >> a;
	b = 0.0;
	int n = 1;//����ѭ��������n
	fenmu = 1;//��ĸ	
	fenzi = a;//����
	jiecheng = 1;//�׳˵Ľ��
	while (fabs(fenzi / fenmu) > 1e-10)//����ֵ����10^-6ʱ�������º���
	{
		fenzi = pow(a, 2 * n - 1);//����=a^(2n-1)
		num = 2 * n - 1;//�׳˵��м���
		jiecheng = 1;
		while (num>1)
		{
			jiecheng = num * jiecheng;
			num--;
		}//��num����1��ִ��
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

