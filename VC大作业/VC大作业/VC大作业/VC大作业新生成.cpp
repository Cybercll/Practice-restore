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
void cal(student(&p)[100],int num);//���㺯��
void showmenu();//�˵���ʾ
void sort(student(&p)[100],int num);//����
void aver(student(&p)[100],int num);//ƽ���ּ��㺯��
void printall(student(&p)[100],int i);//�������ѧ����Ϣ
int printone(int a,student(&p)[100],int num);//���ѧ��Ϊa��ѧ����Ϣ
int search(int a, student(&p)[100],int i);//����ѧ��Ϊa��ѧ��������stusort����ĽǱ�
void max(student(&p)[100],int);//������ѧ����Ϣ
void input(student(&p)[100],int q);//����һ��ѧ����Ϣ
void head();//���ڿ��������ͷ
void del(student (&p)[100],int no,int num);//ɾ������
int main()//main ����
{
	int stunum=5;//����ѧ����ʼ����
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
		int searchid;//��Ҫ����
		switch (choice)
		{
		default:
		{
			cout << "�����������������" << endl;
			showmenu();
		}
		case 1: {printall(stusort,stunum); continue; }
		case 2: {aver(stusort,stunum); continue; }
		case 3: {cin >> searchid; search(searchid, stusort,stunum); continue; }
		case 4: {max(stusort,stunum); continue; }//������õ�
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
void showmenu()//showmenu����
{
	cout << "**************************" << endl << "������1~6������" << endl << "1. ���ѧ����Ϣ" << endl << "2. ������ƽ���ɼ�" << endl << "3. ��ѯָ��ѧ��ѧ����Ϣ" << endl << "4. ������õ�ѧ����Ϣ" << endl << "5. ��ѧ�������ճɼ���������" << endl << "6. ����" <<endl<<"7. ����������"<<endl<<"8. ɾ��ָ��ѧ����Ϣ"<< endl <<"0. ����"<<endl<< "**************************" << endl;
	cout << "������ѡ��" << endl;
}
void sort(student(&t)[100],int num)
{
	student temp;
	for (int i = 0; i < num; i++)//˫�������
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
	cout << "ƽ��������" << endl << a / num<< endl;
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
		cout << "�������" << endl;
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
	cout << "ѧ��" << '\t' << "����" << '\t' << "��ĩ�ɼ�" << '\t' << "���гɼ�" << '\t' << "ƽʱ�ɼ�" << '\t' << "���ճɼ�" << endl;
}
void del(student(&p)[100],int n,int num)
{
	/*
	���Ȳ��Һ����ҵ��Ǳ�
	��ΰ�ɾȥ��һ������������ǰŲһ��
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
