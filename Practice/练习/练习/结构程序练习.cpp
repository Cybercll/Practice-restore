#include<iostream> ///�����������������������ͣ��ж������Ƿ���ȷ��
#include<ctime>
using namespace std;
void p5()
{
	int a, b, c, d = 0;
	srand((unsigned int)(time(NULL)));//ʹrand�������������������ʱ��仯
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
