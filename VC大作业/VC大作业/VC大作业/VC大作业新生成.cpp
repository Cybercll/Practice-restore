#include <iostream>
using namespace std;
class student //����student��
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
void cal(student(&p)[5]);//���㺯��
void showmenu();//�˵���ʾ
void sort(student(&p)[5]);//����
void aver(student(&p)[5]);//ƽ����
void printall(student(&p)[5]);//���ѧ����Ϣ
void printone(int a,student(&p)[5]);//�����һѧ����Ϣ
int search(int a, student(&p)[5]);//����
void max(student(&p)[5]);//������ѧ����Ϣ
int main()//main ����
{
	student
		stu1 = { 1601,"LiLi",51,62,80 },
		stu2 = { 1602,"WangTao",84,88,90 },
		stu3 = { 1603,"ZhaoYi",95,90,95 },
		stu4 = { 1604,"LiuFang",62,73,80 },
		stu5 = { 1605,"ShenBin",73,66,90 };
	student stusort[5] = { stu1,stu2,stu3,stu4,stu5 };
	cal(stusort);
	bool stop = 1;
	while (stop) {
		int choice;
		showmenu();
		cin >> choice;
		switch (choice)
		{
		default:
		{
			cout << "�����������������" << endl;
			showmenu();
		}
		case 1: {printall(stusort); continue; }
		case 2: {aver(stusort); continue; }
		case 3: {int searchid; cin >> searchid; search(searchid, stusort); continue; }
		case 4: {max(stusort); continue; }//������õ�
		case 5: {sort(stusort); printall(stusort); continue; }
		case 6: stop = 0; break;
		case 0: system("cls");
		}
	}return 0;
}
void cal(student(&p)[5])
{
	p[0].sc = 0.6 * p[0].sc1 + 0.3 * p[0].sc2 + 0.1 * p[0].sc3;
	p[1].sc = 0.6 * p[1].sc1 + 0.3 * p[1].sc2 + 0.1 * p[1].sc3;
	p[2].sc = 0.6 * p[2].sc1 + 0.3 * p[2].sc2 + 0.1 * p[2].sc3;
	p[3].sc = 0.6 * p[3].sc1 + 0.3 * p[3].sc2 + 0.1 * p[3].sc3;
	p[4].sc = 0.6 * p[4].sc1 + 0.3 * p[4].sc2 + 0.1 * p[4].sc3;
}
void showmenu()//showmenu����
{
	cout << "**************************" << endl << "������1~6������" << endl << "1. ���ѧ����Ϣ" << endl << "2. ������ƽ���ɼ�" << endl << "3. ��ѯָ��ѧ��ѧ����Ϣ" << endl << "4. ������õ�ѧ����Ϣ" << endl << "5. ��ѧ�������ճɼ���������" << endl << "6. ����" << endl <<"0. ����"<<endl<< "**************************" << endl;
	cout << "������ѡ��" << endl;
}
void sort(student(&t)[5])
{
	student temp;
	for (int i = 0; i < 5; i++)//˫�������
	{
		for (int p = i + 1; p < 5; p++)
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
void aver(student(&p)[5])
{
	double a = 0;
	for (int i = 0; i < 5; i++)
	{
		a += p[i].sc;
	}
	cout << "ƽ��������" << endl << a / 5 << endl;
}
void printall(student(&p)[5])
{
	for (int i = 0; i < 5; i++)
	{
		cout << "ѧ��" << '\t' << "����" << '\t' << "��ĩ�ɼ�" << '\t' << "���гɼ�" << '\t' << "ƽʱ�ɼ�" << '\t' << "���ճɼ�" << endl;
		cout << p[i].no << '\t' << p[i].xm << '\t' << p[i].sc1 << '\t' << '\t' << p[i].sc2 << '\t' << '\t' << p[i].sc3 << '\t' << '\t' << p[i].sc << endl;
	}
};
void printone(int a, student(&p)[5])
{
	int i = 0;
	while (i < 5 && a != p[i].no)
	{
		i++;
	}
	if (a== p[i].no)
	{
		cout << "ѧ��" << '\t' << "����" << '\t' << "��ĩ�ɼ�" << '\t' << "���гɼ�" << '\t' << "ƽʱ�ɼ�" << '\t' << "���ճɼ�" << endl;
		cout << p[i].no << '\t' << p[i].xm << '\t' << p[i].sc1 << '\t' << '\t' << p[i].sc2 << '\t' << '\t' << p[i].sc3 << '\t' << '\t' << p[i].sc << endl;
	}
	else
	{
		cout << "�������" << endl;
	}
}
int search(int a, student(&p)[5])
{
	int i = 0;
	printone(a,p);
	return i;
}
void max(student(&p)[5])
{
	int maxscore = p[1].sc;
	int max_ = 0;
	for (int i = 1; i < 5; i++)
	{
		//maxscore = () ? p[i].sc : p[i + 1].sc;
		if (p[i].sc > maxscore)
		{
			maxscore = p[i].sc;
			max_ = i;
		}
	}
	cout << "ѧ��" << '\t' << "����" << '\t' << "��ĩ�ɼ�" << '\t' << "���гɼ�" << '\t' << "ƽʱ�ɼ�" << '\t' << "���ճɼ�" << endl;
	cout << p[max_].no << '\t' << p[max_].xm << '\t' << p[max_].sc1 << '\t' << '\t' << p[max_].sc2 << '\t' << '\t' << p[max_].sc3 << '\t' << '\t' << p[max_].sc << endl;
}
