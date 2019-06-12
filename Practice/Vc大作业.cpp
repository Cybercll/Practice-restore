#include <iostream>
using namespace std;
struct student
{
	int no;
	char xm[20];
	double sc1;
	double sc2;
	double sc3;
	double sc;
};//student结构定义
student
stu1 = { 1601,"LiLi",51,62,80 },
stu2 = { 1602,"WangTao",84,88,90 },
stu3 = { 1603,"ZhaoYi",95,90,95 },
stu4 = { 1604,"LiuFang",62,73,80 },
stu5 = { 1605,"ShenBin",73,66,90 };
void main()//main 函数
{
	void cal();
	void showmenu(student *p);
	void sort(student *p);
	cal();
	student stusort[5] = { stu1,stu2,stu3,stu4,stu5 };
	showmenu(stusort);
	system("pause");
}

void cal()
{
	stu1.sc = 0.6 * stu1.sc1 + 0.3 * stu1.sc2 + 0.1 * stu1.sc3;
	stu2.sc = 0.6 * stu2.sc1 + 0.3 * stu2.sc2 + 0.1 * stu2.sc3;
	stu3.sc = 0.6 * stu3.sc1 + 0.3 * stu3.sc2 + 0.1 * stu3.sc3;
	stu4.sc = 0.6 * stu4.sc1 + 0.3 * stu4.sc2 + 0.1 * stu4.sc3;
	stu5.sc = 0.6 * stu5.sc1 + 0.3 * stu5.sc2 + 0.1 * stu5.sc3;
}
void aver(int* t)
{
	float a = 0;
	for (int i = 0; i < 5; i++) 
	{
		a += t[i];
	}
	cout << "平均分数是" << endl << a / 5 << endl;
}
void sort(student* a)
{
	student *temp;
	for (int i = 0; i < 5; i++)//
	{
		for (int p = i+1; p < 5; p++)
		{
			if (a[i].sc < a[p].sc)
			{
				student* p1;
				student* p2;
				p1 = &a[i];
				p2 = &a[p];
				temp = p1;
				p1 = p2;
				p2 = temp;
			}
		}
	}
}
void showmenu(student *p)//showmenu函数 未完成
{
	int scores[5] = { stu1.sc,stu2.sc,stu3.sc,stu4.sc,stu5.sc };
	int choice;//选项
	cout << "**************************" << endl << "请输入1~6内数字" << endl << "1. 输出学生信息" << endl << "2. 计算总平均成绩" << endl << "3. 查询指定学号学生信息" << endl << "4. 考得最好的学生信息" << endl << "5. 按学生的最终成绩降序排序" << endl << "6. 结束" << endl << "**************************" << endl;
	cout << "请输入选项" << endl;
	cin >> choice;
	switch (choice)
	{
	default: 
	{
		cout << "输入错误，请重新输入" << endl; 
		showmenu(p);
	}
	case 1: {for (int i = 0; i < 5; i++) 
	{
		cout << p[i].no <<'\t'<< p[i].xm << endl;
	};showmenu(p);}
	case 2: {aver(scores); showmenu(p); }
	case 3: {; showmenu(p); }
	case 4: {; showmenu(p); }
	case 5: {sort(p); showmenu(p); }
	case 6:break;
	}
}

