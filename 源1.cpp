/*

#include"cstring"
#include"iostream"
using namespace std;
char wenzhang[2500];
int paiming[30];
int zimu[30];
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
	memset(zimu, 0, sizeof(zimu));
	memset(paiming, 0, sizeof(paiming));
	gets_s(wenzhang);
	for (int i = 0; i < strlen(wenzhang); i++)
	{
		pd(wenzhang[i]);
	};
	int u;
	for (int i = 0; i < 26; i++)
	{
		for (u = 0; u < 26; u++)
		{
			if (zimu[i] < zimu[u])
				paiming[i]++;
		};
	};
	int couu = 0;
	for (int i = 0; i < 26; i++)
	{
		couu = 0;
		for (u = i; u < 26; u++)
		{
			if (paiming[i] == paiming[u])
			{
				couu++;
			}
		}
		for (int you = 0; you < 26; you++)
		{
			if (paiming[you]<paiming[i])
				paiming[you] += couu;
		};
		paiming[i] += couu;
	};
};
return 0;
}

*/