#include<iostream>
#include<ctime>
using namespace std;
void p11()
{
	int a, b;
	srand(time(0));
	do
	{
		a = rand() % 10;
		b = rand() % 10;
	} while (a < b);
	system("pause");
}