/*

#include"cstdio"
#include"cstdlib"
#include"cstring"
#include"cmath"
#include"iostream"
using namespace std;
#define MAX 25000;
char wenzhang[25000];
int zimu[30] = {};
int sum = 0;
int main()
{
	gets_s(wenzhang);
	for (int i = 0; wenzhang[i] != 0; i++)
	{
		if (wenzhang[i] <= 'Z'&&wenzhang[i] >= 'A')
			wenzhang[i] = 'Z' - wenzhang[i] + 65;
		if (wenzhang[i] <= 'z'&&wenzhang[i] >= 'a')
			wenzhang[i] = 'z' - wenzhang[i] + 97;
	};
	puts(wenzhang);
	FILE *out;
	char du, dizhi[100];
	cout << "ÊäÈë¶Á³öµØÖ·£º" << endl;
	cin >> dizhi;
	fopen_s(&out, dizhi, "w");
	for (int i = 0; wenzhang[i] != 0; i++)
	{
		du = wenzhang[i];
		fputc(du, out);
	};
	putchar(10);
	fclose(out);
	return 0;
}

*/