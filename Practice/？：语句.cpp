#include <iostream>
using namespace std;//���һ����ĸ�Ĵ�д
void p4()
{
	char cha, oup;
	cout << "Input a charactar"<<endl;
		cin >> cha;
		oup =( cha >= 'a'&&cha <= 'z')?(cha - 32): cha;
		cout << oup << endl;
	system("pause");
}