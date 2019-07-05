#include<iostream>
using namespace std;
int unique(int* p) //定义unique函数
{
	for (int i = 0; i <= 8; i++)//比较初始数自增
	{
		for (int o = i + 1; o <= 8; o++)//被比较数自增 且防止重复冗余比较
		{
			if (p[i] == p[o])
			{
				return 0;
				break;//有相同立即结束
			}
		}
	}
}
void p16()
{
	int nums[9];//九位数组
	int three = 100;//三位数起始数值
	int sixn;//定义六位数
	for (; three < 1000; three++)//第一部分（最外层） 三位数自增
	{
		sixn = three * three;
		if (sixn < 1000000 && sixn >= 100000)//第二层 判断平方是不是六位数
		{
			for (int i = 0, a = sixn; i < 6; i++)//把六个数放入数组
			{
				int c;
				c = pow(10, (5 - i));//pow平方函数
				nums[i] = a / c;
				a -= ((a / c) * c);//利用int相除机制去掉第一位
			}
			for (int i = 0, a = three; i < 3; i++)//把三个数放入数组
			{
				int c;
				c = pow(10, (2 - i));
				nums[6 + i] = a / c;
				a -= ((a / c) * c);
			}
			if (unique(nums) == 0)//unique 函数判断
				continue;//不unique就跳出整个for函数 进行下一轮
			cout << three << endl;//unique返回值不为0 则此时三位数几个条件都满足 输出即可
		}
	}
	system("pause");
}