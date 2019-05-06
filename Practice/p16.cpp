#include<iostream>
using namespace std;
void main()
{
	double a=0,*p; 
	cin >> a;
	p = &a;
	cout << a << endl << p << endl;

	system("pause");
}