#include<iostream>
using namespace std;
void p3()
{
	int year;
	cout << "输入您的出生年" << endl;
	cin >> year;
	cout << "您的生辰年是";
	switch ((year+428)%12)
	{
	case 0:cout << "鼠"; break;
	case 1:cout << "牛"; break;
	case 2:cout << "虎"; break;
	case 3:cout << "兔"; break;
	case 4:cout << "龙"; break;
	case 5:cout << "蛇"; break;
	case 6:cout << "马"; break;
	case 7:cout << "羊"; break;
	case 8:cout << "猴"; break;
	case 9:cout << "鸡"; break;
	case 10:cout << "狗"; break;
	case 11:cout << "猪"; break;
	
	}
	cout << "年"<<endl;
	system("pause");
}