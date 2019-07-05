#include<iostream>
#include<cmath>
using namespace std;
void p6()
{
	float a, c = 0;
	char b;
	cout << "number ? number" << endl;
	cin >>a>>b>>c;
	cout << "The answer is" << endl;
	switch (b)
	{
	case '+':cout << a + c << endl; break;
	case '-':cout << a - c << endl; break;
	case '*':cout << a * c << endl; break;
	case '/':cout << a / c << endl; break;
	}
	

	system("pause");
}