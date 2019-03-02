#include <iostream>
using namespace std;//Êä³öÒ»¸ö×ÖÄ¸µÄ´óÐ´
void p4()
{
	char cha, oup;
	cout << "Input a charactar"<<endl;
		cin >> cha;
		oup =( cha >= 'a'&&cha <= 'z')?(cha - 32): (cha+32);
		cout << oup << endl;
	system("pause");
}
