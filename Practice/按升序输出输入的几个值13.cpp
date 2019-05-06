#include<iostream>
using namespace std;
void p13() 
{
	cout << "输入数据数量 小于100" << endl;
	int a[100];
	int N;
	cin >>N;
	int cup=0;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	for (int i = N; i <= N; i++)
	{
		cup = a[0];
		for (int f=0;f<i;f++) 
		{
			if (a[f] < a[f + 1])
			{
				cup = a[f]; a[f] = a[f + 1]; a[f + 1] = cup;
			}
		}
	}
	for (N--; N >= 0; N--)
	{
		cout << a[N]<<"\t";
	}
	system("pause");

}