/*

#include"cstdio"
#include"cstring"
#include"cmath"
#include"iostream"
using namespace std;
int zimu[30] = {};
int sum = 0;
void pd(char c)
{
	switch (c)
	{
	case 'a':
	case 'A':{zimu[0]++; sum++; }; break;
	case 'b':
	case 'B':{zimu[1]++; sum++; }; break;
	case 'c':
	case 'C':{zimu[2]++; sum++; }; break;
	case 'd':
	case 'D':{zimu[3]++; sum++; }; break;
	case 'e':
	case 'E':{zimu[4]++; sum++; }; break;
	case 'f':
	case 'F':{zimu[5]++; sum++; }; break;
	case 'g':
	case 'G':{zimu[6]++; sum++; }; break;
	case 'h':
	case 'H':{zimu[7]++; sum++; }; break;
	case 'i':
	case 'I':{zimu[8]++; sum++; }; break;
	case 'j':
	case 'J':{zimu[9]++; sum++; }; break;
	case 'k':
	case 'K':{zimu[10]++; sum++; }; break;
	case 'l':
	case 'L':{zimu[11]++; sum++; }; break;
	case 'm':
	case 'M':{zimu[12]++; sum++; }; break;
	case 'n':
	case 'N':{zimu[13]++; sum++; }; break;
	case 'o':
	case 'O':{zimu[14]++; sum++; }; break;
	case 'p':
	case 'P':{zimu[15]++; sum++; }; break;
	case 'q':
	case 'Q':{zimu[16]++; sum++; }; break;
	case 'r':
	case 'R':{zimu[17]++; sum++; }; break;
	case 's':
	case 'S':{zimu[18]++; sum++; }; break;
	case 't':
	case 'T':{zimu[19]++; sum++; }; break;
	case 'u':
	case 'U':{zimu[20]++; sum++; }; break;
	case 'v':
	case 'V':{zimu[21]++; sum++; }; break;
	case 'w':
	case 'W':{zimu[22]++; sum++; }; break;
	case 'x':
	case 'X':{zimu[23]++; sum++; }; break;
	case 'y':
	case 'Y':{zimu[24]++; sum++; }; break;
	case 'z':
	case 'Z':{zimu[25]++; sum++; }; break;
	default:{};
	}
}
int main()
{
	char c;
	while (cin >> c)
	{
		pd(c);
	};
	for (int i = 0; i < 26; i++)
	{
		printf("%c:", i + 97);
		cout << "³öÏÖÊý£º" << zimu[i];
		printf("´ÊÆµ£º%.2f%%\n", ((double)(zimu[i]) / sum) * 100);
	};
	cin.get();
	return 0;
}

*/