/*
#include"cstdio"
#include"cstring"
#include"iostream"
using namespace std;
char wenzhang[2500];
char danci[2500][30];
int xiangsidu(char a[])//���������ĵ���
{
	int len1 = strlen(a);
	int len2;
	int sum = 0;
	for (int i = 0; i < 2500; i++)
	{
		sum = 0;
		len2 = strlen(danci[i]);
		if (len2 == len1)
		{
			for (int x = 0; x < len2; x++)
			{
				if (a[x] == danci[i][x])
					sum++;
			}
			if (sum == 1)
			if ((sum) >= len2)
				return i;
			else if ((sum + 1) >= len2)
				return i;
		}

	};
	return -1;
}
int pdd(char a[])//�жϵ����Ƿ���ĸ��һ��
{
	int sum = 0;
	int b = 1;
	int i = 0;
	int len1 = strlen(a);
	int len2;
	int len3;
	for (; i < 2500; i++)
	{
		len3 = strlen(danci[i]);
		if (len3 != len1)
			continue;
		sum = 0;
		for (len2 = 0; len2 < len1; len2++)
		if (a[len2] == danci[i][len2])
			sum++;
		if (sum == len1)
			return 1;
	};
	return 0;
}
int main()
{
	int a = 0, b;
	while (gets_s(danci[a]))
	{
		a++;
	};
	char cc[30];
	while (gets_s(cc))
	{
		if (pdd(cc))
			cout << "������ȷ" << endl;
		else
		{
			cout << "���ʴ���" << endl;
			if (xiangsidu(cc) < 0)
			{
				cout << "û�к��ʵĵ���" << endl;
				continue;
			}
			else
			{
				strcpy_s(cc, danci[xiangsidu(cc)]);//���Ƶ���
				cout << cc << endl;
			}

		};
	};
	return 0;

	
	}

	*/