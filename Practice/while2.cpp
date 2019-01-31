//	输入一个整数，输出其位数，并将其按逆序输出.
#include<iostream>
using namespace std;
void main()
{
	//利用while函数每次可以除10 可出位数
	//再利用所得小数得到位数
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