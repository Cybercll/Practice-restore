//	����һ�������������λ���������䰴�������.
#include<iostream>
using namespace std;
void main()
{
	//����while����ÿ�ο��Գ�10 �ɳ�λ��
	//����������С���õ�λ��
	cout << "Plz input an integer" << endl;
	int input, a, b, n, c;
	input = a = b = n = c = 0;
	cin >> input;
	b = input;
	while (b>=1)
	{
		c = c * 10;
		input = b % 10;
		b = (b - b % 10);
		b = b / 10.0;
		c = input % 10 + c;
		n = n + 1;
	}
	cout << n << endl << c << endl;
	system("pause");
	
}