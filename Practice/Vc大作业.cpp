#include <iostream>
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

student
stu1 = { 1601,"LiLi",51,62,80 },
stu2 = { 1602,"WangTao",84,88,90 },
stu3 = { 1603,"ZhaoYi",95,90,95 },
stu4 = { 1604,"LiuFang",62,73,80 },
stu5 = { 1605,"ShenBin",73,66,90 };
void cal();
void showmenu();
void sort(student* p);
void aver(int *p);
void printall(student *p);
void main()//main 函数
{
	cal();
	student stusort[5] = { stu1,stu2,stu3,stu4,stu5 };
	int scores[5] = { stu1.sc,stu2.sc,stu3.sc,stu4.sc,stu5.sc };
	
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
		case 2: {aver(scores); continue; }
		case 3: {}
		case 4: {}
		case 5: {sort(stusort);printall(stusort); continue; }
		case 6: stop = 0; break;
		}
		
	}
}
void cal()
{
	stu1.sc = 0.6 * stu1.sc1 + 0.3 * stu1.sc2 + 0.1 * stu1.sc3;
	stu2.sc = 0.6 * stu2.sc1 + 0.3 * stu2.sc2 + 0.1 * stu2.sc3;
	stu3.sc = 0.6 * stu3.sc1 + 0.3 * stu3.sc2 + 0.1 * stu3.sc3;
	stu4.sc = 0.6 * stu4.sc1 + 0.3 * stu4.sc2 + 0.1 * stu4.sc3;
	stu5.sc = 0.6 * stu5.sc1 + 0.3 * stu5.sc2 + 0.1 * stu5.sc3;
}

void printall(student *stusort)
{

	for (int i = 0; i < 5; i++)
	{
		cout << "学号" << '\t' << "姓名" << '\t' << "期末成绩" << '\t' << "期中成绩" << '\t' << "平时成绩" << '\t' << "最终成绩" << endl;
		cout << stusort[i].no << '\t' << stusort[i].xm << '\t' << stusort[i].sc1 << '\t' << '\t' << stusort[i].sc2 << '\t' << '\t' << stusort[i].sc3 << '\t' << '\t' << stusort[i].sc << endl;

	}
};
void aver(int *p)
{
	float a = 0;
	for (int i = 0; i < 5; i++) 
	{
		a += p[i];
	}
	cout << "平均分数是" << endl << a / 5 << endl;
}

void sort(student * a)
{
	student* temp ;
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

void showmenu()//showmenu函数0
{
	cout << "**************************" << endl << "请输入1~6内数字" << endl << "1. 输出学生信息" << endl << "2. 计算总平均成绩" << endl << "3. 查询指定学号学生信息" << endl << "4. 考得最好的学生信息" << endl << "5. 按学生的最终成绩降序排序" << endl << "6. 结束" << endl << "**************************" << endl;
	cout << "请输入选项" << endl;
}

