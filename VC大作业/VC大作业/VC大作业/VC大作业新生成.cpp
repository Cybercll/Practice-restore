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
};
void cal(student(&p)[100], int num);//���㺯��
void showmenu();//�˵���ʾ
void sort(student(&p)[100], int num);//����
void aver(student(&p)[100], int num);//ƽ���ּ��㺯��
void printall(student(&p)[100], int num);//�������ѧ����Ϣ
int search(int a, student(&p)[100], int num);//���ѧ��Ϊa��ѧ����Ϣ
void max(student(&p)[100], int);//������ѧ����Ϣ
void input(student(&p)[100], int& num);//����һ��ѧ����Ϣ
void head();//���ڿ��������ͷ
void del(student(&p)[100], int n, int& num);//ɾ������
int main()//main ����
{
	int stunum = 5;//����ѧ����ʼ����
	student//��ʼ�����ѧ����Ϣ
		stu1 = { 1601,"LiLi",51,62,80 },
		stu2 = { 1602,"WangTao",84,88,90 },
		stu3 = { 1603,"ZhaoYi",95,90,95 },
		stu4 = { 1604,"LiuFang",62,73,80 },
		stu5 = { 1605,"ShenBin",73,66,90 };
	student stusort[100] = { stu1,stu2,stu3,stu4,stu5 };//����һ��100 ��Ԫ�صĽṹ��������ʹ����Խ�����ɾ
	cal(stusort, stunum);//���ü��㺯����������ֵ
	bool stop = 1;//����stop--һ�������Ϳ��ر���
	int searchid;//��ʼ��������ѧ�� //��һ����Ҫ������˷ŵ����
	while (stop) {
		char choice;//ѡ����� ����Ϊchar������ֹ�����ַ����³����쳣
		system("cls");
		showmenu();//��ʾ�˵�
		cin >> choice;//����ѡ��
		switch (choice)//ѡ����Բ���
		{
		default:
		{
			system("cls");//ÿ�ν������Զ������Ļ����
			cout << "�����������������" << endl;
			continue;
		}//��������
		case '1': {printall(stusort, stunum); system("pause"); continue;  }//��continue֮ǰ����һ����ͣ ���û�һ������ʱ��
		case '2': {aver(stusort, stunum); system("pause"); continue; }
		case '3': {cout << "������Ҫ��ѯ��ѧ��"; cin >> searchid; search(searchid, stusort, stunum); system("pause"); continue; }
		case '4': {max(stusort, stunum); system("pause"); continue; }
		case '5': {sort(stusort, stunum); printall(stusort, stunum); system("pause"); continue; }
		case '6': stop = 0; break;//��Ϊ6��ʱ��ѿ��ز���0
		case '7': {
			cout << "����������" << endl;
			head();
			input(stusort, stunum);
			cal(stusort, stunum);
			printall(stusort, stunum); system("pause");
			continue;
		}
		case '8':
		{
			cout << "����Ҫɾ����Ϣѧ��" << endl;
			cin >> searchid;
			del(stusort, searchid, stunum); system("pause");
			continue;
		}
		}
	}return 0;
}
void cal(student(&p)[100], int num)
{
	for (int n = 0; n < num; n++)
	{
		p[n].sc = 0.6 * p[n].sc1 + 0.3 * p[n].sc2 + 0.1 * p[n].sc3;//���չ�ʽ����
	}
}
void showmenu()//showmenu����
{
	cout << "**************************" << endl << "������1~6������" << endl << "1. ���ѧ����Ϣ" << endl << "2. ������ƽ���ɼ�" << endl << "3. ��ѯָ��ѧ��ѧ����Ϣ" << endl << "4. ������õ�ѧ����Ϣ" << endl << "5. ��ѧ�������ճɼ���������" << endl << "6. ����" << endl << "7. ����������" << endl << "8. ɾ��ָ��ѧ����Ϣ" << endl << "**************************" << endl; //�˵�
	cout << "������ѡ��" << endl;
}
void sort(student(&t)[100], int num)
{
	student temp;
	for (int i = 0; i < num; i++)//˫��ð�ݽ���
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
void aver(student(&p)[100], int num)
{
	double a = 0;
	for (int i = 0; i < num; i++)
	{
		a += p[i].sc;
	}
	cout << "ƽ��������" << endl << a / num << endl;
}
void printall(student(&p)[100], int num)
{
	head();
	for (int i = 0; i < num; i++)
	{
		cout << p[i].no << '\t' << p[i].xm << '\t' << p[i].sc1 << '\t' << '\t' << p[i].sc2 << '\t' << '\t' << p[i].sc3 << '\t' << '\t' << p[i].sc << endl;
	}
};
int search(int a, student(&p)[100], int num)
{
	int i = 0;
	while (i < num && a != p[i].no)
	{
		i++;
	}
	if (a == p[i].no)//��ֹ����stusortҲû���ҵ�����ѧ�ŵļ�¼�Ӷ�������һλ
	{
		head();
		cout << p[i].no << '\t' << p[i].xm << '\t' << p[i].sc1 << '\t' << '\t' << p[i].sc2 << '\t' << '\t' << p[i].sc3 << '\t' << '\t' << p[i].sc << endl;
		return i;
	}
	else
	{
		cout << "δ�ҵ���ͬѧ�ŵļ�¼" << endl;
		return -1;
	}
}
void max(student(&p)[100], int num)
{
	int maxscore = p[0].sc;
	int max_ = 0;
	for (int i = 1; i < num; i++)
	{
		if (p[i].sc > maxscore)
		{
			maxscore = p[i].sc;
			max_ = i;
		}
	}
	head();
	cout << p[max_].no << '\t' << p[max_].xm << '\t' << p[max_].sc1 << '\t' << '\t' << p[max_].sc2 << '\t' << '\t' << p[max_].sc3 << '\t' << '\t' << p[max_].sc << endl;
}
void input(student(&p)[100], int& num)
{
	student temp = {};
	cin >> temp.no >> temp.xm >> temp.sc1 >> temp.sc2 >> temp.sc3;
	if (search(temp.no, p, num) == -1)
	{
		p[num] = temp;
		num++;
		sort(p, num);
		cout << "������" << endl;
	}
	else cout << "�ҵ�����ѧ���ظ���¼�������ԣ�" << endl;
}
void head()
{
	cout << "ѧ��" << '\t' << "����" << '\t' << "��ĩ�ɼ�" << '\t' << "���гɼ�" << '\t' << "ƽʱ�ɼ�" << '\t' << "���ճɼ�" << endl;
}
void del(student(&p)[100], int n, int& num)
{
	int i = 0;
	int p_ = 0; //���Ȳ��Һ����ҵ��Ǳ�//��ΰ�ɾȥ��һ������������ǰŲһ��
	for (; i < num && n != p[i].no; i++);//����p[i].no�ҳ���ȵ�i
	if (p[i].no == n)//����Ƿ���� ��ȼ���ʼ���� ���򱨴�
	{
		p_ = i;
		for (int h = p_; h < 99; h++)
		{
			p[h] = p[h + 1];//����������ǰһλ���Ǽ�ɾ��
		}
		num--;
		cout << "�ɹ�ɾ��" << endl;
	}
	else
	{
		cout << "�޴˼�¼,ɾ��ʧ��" << endl;
	}

}
