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
};//student�ṹ����
student
stu1 = { 1601,"LiLi",51,62,80 },
stu2 = { 1602,"WangTao",84,88,90 },
stu3 = { 1603,"ZhaoYi",95,90,95 },
stu4 = { 1604,"LiuFang",62,73,80 },
stu5 = { 1605,"ShenBin",73,66,90 };
void main()//main ����
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
	cout << "ƽ��������" << endl << a / 5 << endl;
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
void showmenu(student *p)//showmenu���� δ���
{
	int scores[5] = { stu1.sc,stu2.sc,stu3.sc,stu4.sc,stu5.sc };
	int choice;//ѡ��
	cout << "**************************" << endl << "������1~6������" << endl << "1. ���ѧ����Ϣ" << endl << "2. ������ƽ���ɼ�" << endl << "3. ��ѯָ��ѧ��ѧ����Ϣ" << endl << "4. ������õ�ѧ����Ϣ" << endl << "5. ��ѧ�������ճɼ���������" << endl << "6. ����" << endl << "**************************" << endl;
	cout << "������ѡ��" << endl;
	cin >> choice;
	switch (choice)
	{
	default: 
	{
		cout << "�����������������" << endl; 
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

