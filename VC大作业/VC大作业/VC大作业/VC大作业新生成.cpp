#include <iostream>
using namespace std;
class student //定义student类
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
void cal(student(&p)[100],int num);//计算函数
void showmenu();//菜单显示
void sort(student(&p)[100],int num);//排序
void aver(student(&p)[100],int num);//平均分计算函数
void printall(student(&p)[100],int i);//输出所有学生信息
int printone(int a,student(&p)[100],int num);//输出学号为a的学生信息
int search(int a, student(&p)[100],int i);//搜索学号为a的学生并返回stusort里面的角标
void max(student(&p)[100],int);//输出最大学生信息
void input(student(&p)[100],int q);//输入一行学生信息
void head();//用于快速输出表头
void del(student (&p)[100],int no,int num);//删除函数
int main()//main 函数
{
	int stunum=5;//定义学生初始数量
	student
		stu1 = { 1601,"LiLi",51,62,80 },
		stu2 = { 1602,"WangTao",84,88,90 },
		stu3 = { 1603,"ZhaoYi",95,90,95 },
		stu4 = { 1604,"LiuFang",62,73,80 },
		stu5 = { 1605,"ShenBin",73,66,90 };
	student stusort[100] = { stu1,stu2,stu3,stu4,stu5 };
	cal(stusort,stunum);
	bool stop = 1;
	while (stop) {
		int choice;
		showmenu();
		cin >> choice;
		int searchid;//需要复用
		switch (choice)
		{
		default:
		{
			cout << "输入错误，请重新输入" << endl;
			showmenu();
		}
		case 1: {printall(stusort,stunum); continue; }
		case 2: {aver(stusort,stunum); continue; }
		case 3: {cin >> searchid; search(searchid, stusort,stunum); continue; }
		case 4: {max(stusort,stunum); continue; }//考的最好的
		case 5: {sort(stusort,stunum); printall(stusort,stunum); continue; }
		case 6: stop = 0; break;
		case 7:{
			head();
			input(stusort, stunum);
			stunum++; 
			cal(stusort, stunum);
			sort(stusort, stunum);
			printall(stusort, stunum);
			continue;
			}
		case 8: 
		{
			cin >> searchid;
			del(stusort,searchid,stunum);
			stunum--;
			continue;
		}
		case 0: system("cls"); 
		}
	}return 0;
}
void cal(student(&p)[100],int num)
{
	for (int n = 0; n < num; n++)
	{
		p[n].sc = 0.6 * p[n].sc1 + 0.3 * p[n].sc2 + 0.1 * p[n].sc3;
	}
	
}
void showmenu()//showmenu函数
{
	cout << "**************************" << endl << "请输入1~6内数字" << endl << "1. 输出学生信息" << endl << "2. 计算总平均成绩" << endl << "3. 查询指定学号学生信息" << endl << "4. 考得最好的学生信息" << endl << "5. 按学生的最终成绩降序排序" << endl << "6. 结束" <<endl<<"7. 输入新数据"<<endl<<"8. 删除指定学号信息"<< endl <<"0. 清屏"<<endl<< "**************************" << endl;
	cout << "请输入选项" << endl;
}
void sort(student(&t)[100],int num)
{
	student temp;
	for (int i = 0; i < num; i++)//双层防冗余
	{
		for (int p = i + 1; p < num; p++)
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
void aver(student(&p)[100],int num)
{
	double a = 0;
	for (int i = 0; i < num; i++)
	{
		a += p[i].sc;
	}
	cout << "平均分数是" << endl << a / num<< endl;
}
void printall(student(&p)[100],int num)
{
	for (int i = 0; i < num; i++)
	{
		head();
		cout << p[i].no << '\t' << p[i].xm << '\t' << p[i].sc1 << '\t' << '\t' << p[i].sc2 << '\t' << '\t' << p[i].sc3 << '\t' << '\t' << p[i].sc << endl;
	}
};
int printone(int a, student(&p)[100],int num)
{
	int i = 0;
	while (i < num && a != p[i].no)
	{
		i++;
	}
	if (a== p[i].no)
	{
		head();
		cout << p[i].no << '\t' << p[i].xm << '\t' << p[i].sc1 << '\t' << '\t' << p[i].sc2 << '\t' << '\t' << p[i].sc3 << '\t' << '\t' << p[i].sc << endl;
		return i;
	}
	else
	{
		cout << "输入错误" << endl;
		return -1;
	}
}
int search(int a, student(&p)[100],int v)
{
	int i = 0;
	printone(a,p,v);
	return printone(a, p, v);
}
void max(student(&p)[100],int num)
{
	int maxscore = p[0].sc;
	int max_ = 0;
	for (int i = 1; i < num; i++)
	{
		//maxscore = () ? p[i].sc : p[i + 1].sc;
		if (p[i].sc > maxscore)
		{
			maxscore = p[i].sc;
			max_ = i;
		}
	}
	head();
	cout << p[max_].no << '\t' << p[max_].xm << '\t' << p[max_].sc1 << '\t' << '\t' << p[max_].sc2 << '\t' << '\t' << p[max_].sc3 << '\t' << '\t' << p[max_].sc << endl;
}
void input(student(&p)[100], int q)
{
	student inputstu;
	cin >> inputstu.no >> inputstu.xm>> inputstu.sc1 >> inputstu.sc2 >> inputstu.sc3;
	p[q] = inputstu;
}
void head()
{
	cout << "学号" << '\t' << "姓名" << '\t' << "期末成绩" << '\t' << "期中成绩" << '\t' << "平时成绩" << '\t' << "最终成绩" << endl;
}
void del(student(&p)[100],int n,int num)
{
	/*
	首先查找函数找到角标
	其次把删去这一点后面的数组向前挪一个
	*/
	int i = 0;
	int p_=0;
	for (;!( i < num && n == p[i].no); i++);
	if (n == p[i].no)
	{
		p_= i;
	}
	p[p_] = {};
	for (int h = p_; h < 99; h++) 
	{
		p[h]=p[h + 1];
	}
}
