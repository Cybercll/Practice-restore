#include<iostream>
using namespace std;
int unique(int* p) //����unique����
{
	for (int i = 0; i <= 8; i++)//�Ƚϳ�ʼ������
	{
		for (int o = i + 1; o <= 8; o++)//���Ƚ������� �ҷ�ֹ�ظ�����Ƚ�
		{
			if (p[i] == p[o])
			{
				return 0;
				break;//����ͬ��������
			}
		}
	}
}
void p16()
{
	int nums[9];//��λ����
	int three = 100;//��λ����ʼ��ֵ
	int sixn;//������λ��
	for (; three < 1000; three++)//��һ���֣�����㣩 ��λ������
	{
		sixn = three * three;
		if (sixn < 1000000 && sixn >= 100000)//�ڶ��� �ж�ƽ���ǲ�����λ��
		{
			for (int i = 0, a = sixn; i < 6; i++)//����������������
			{
				int c;
				c = pow(10, (5 - i));//powƽ������
				nums[i] = a / c;
				a -= ((a / c) * c);//����int�������ȥ����һλ
			}
			for (int i = 0, a = three; i < 3; i++)//����������������
			{
				int c;
				c = pow(10, (2 - i));
				nums[6 + i] = a / c;
				a -= ((a / c) * c);
			}
			if (unique(nums) == 0)//unique �����ж�
				continue;//��unique����������for���� ������һ��
			cout << three << endl;//unique����ֵ��Ϊ0 ���ʱ��λ���������������� �������
		}
	}
	system("pause");
}