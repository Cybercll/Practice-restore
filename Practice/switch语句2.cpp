#include<iostream>
using namespace std;
void p3()
{
	int year;
	cout << "�������ĳ�����" << endl;
	cin >> year;
	cout << "������������";
	switch ((year+428)%12)
	{
	case 0:cout << "��"; break;
	case 1:cout << "ţ"; break;
	case 2:cout << "��"; break;
	case 3:cout << "��"; break;
	case 4:cout << "��"; break;
	case 5:cout << "��"; break;
	case 6:cout << "��"; break;
	case 7:cout << "��"; break;
	case 8:cout << "��"; break;
	case 9:cout << "��"; break;
	case 10:cout << "��"; break;
	case 11:cout << "��"; break;
	
	}
	cout << "��"<<endl;
	system("pause");
}