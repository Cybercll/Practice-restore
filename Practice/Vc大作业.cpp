#include <iostream>
#include <stdafx.h>
using namespace std;
class student
{
public:
	int no;
	char xm[20];
	double sc1;
	double sc2;
	double sc3;
	double sc;

private:

};


void cal(student  (&p)[5]);//计算函数
void showmenu();//菜单显示
void sort(student  (&p)[5]);//排序
void aver(student  (&p)[5]);//平均分
void printall(student (&p)[5]);//输出学生信息
void search(int a,student(&p)[5]);//搜索
void max(student(&p)[5]);//输出最大学生信息
int main()//main 函数
{
	student
		stu1 = {1601,"LiLi",51,62,80},
		stu2 = {1602,"WangTao",84,88,90},
		stu3 = {1603,"ZhaoYi",95,90,95},
		stu4 = {1604,"LiuFang",62,73,80},
		stu5 = {1605,"ShenBin",73,66,90};
	student stusort[5] = { stu1,stu2,stu3,stu4,stu5 };
	cal(stusort);
	bool stop=1;
	while (stop) {
		int choice;
		showmenu();
		cin >> choice;
		switch (choice)
		{
		default:
			{
				cout << "输入错误，请重新输入" << endl;
				showmenu();
			}
		case 1: {printall(stusort); continue; }
		case 2: {aver(stusort); continue; }
		case 3: {int searchid;cin>>searchid;search(searchid,stusort);continue;}
		case 4: {}
		case 5: {sort(stusort);printall(stusort); continue; }
		case 6: stop = 0; break;
		}

	}return 0;
}
void cal(student (&p)[5])
{
	p[0].sc = 0.6 * p[0].sc1 + 0.3 * p[0].sc2 + 0.1 * p[0].sc3;
	p[1].sc = 0.6 * p[1].sc1 + 0.3 * p[1].sc2 + 0.1 * p[1].sc3;
	p[2].sc = 0.6 * p[2].sc1 + 0.3 * p[2].sc2 + 0.1 * p[2].sc3;
	p[3].sc = 0.6 * p[3].sc1 + 0.3 * p[3].sc2 + 0.1 * p[3].sc3;
	p[4].sc = 0.6 * p[4].sc1 + 0.3 * p[4].sc2 + 0.1 * p[4].sc3;
}
void printall(student (&p)[5])
{

	for (int i = 0; i < 5; i++)
	{
		cout << "学号" << '\t' << "姓名" << '\t' << "期末成绩" << '\t' << "期中成绩" << '\t' << "平时成绩" << '\t' << "最终成绩" << endl;
		cout << p[i].no << '\t' << p[i].xm << '\t' << p[i].sc1 << '\t' << '\t' << p[i].sc2 << '\t' << '\t' << p[i].sc3 << '\t' << '\t' << p[i].sc << endl;
	}
};
void aver(student (&p)[5])
{
	double a = 0;
	for (int i = 0; i < 5; i++) 
	{
		a += p[i].sc;
	}
	cout << "平均分数是" << endl << a / 5 << endl;
}

void sort(student(&t)[5])
{
	student temp ;
	for (int i = 0; i < 5; i++)//
	{
		for (int p = i+1; p < 5; p++)
		{
			if (t[i].sc < t[p].sc)
			{
				temp = t[i];
				t[i] = t[p];
				t[p] = temp;
			}
		}
	}
}

void showmenu()//showmenu函数0
{
	cout << "**************************" << endl << "请输入1~6内数字" << endl << "1. 输出学生信息" << endl << "2. 计算总平均成绩" << endl << "3. 查询指定学号学生信息" << endl << "4. 考得最好的学生信息" << endl << "5. 按学生的最终成绩降序排序" << endl << "6. 结束" << endl << "**************************" << endl;
	cout << "请输入选项" << endl;
}
void search(int a,student (&p)[5])
{

}
