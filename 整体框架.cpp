

#include"cstring"
#include"wordlist.h"
#include"iostream"
using namespace std;
const int n = 26;
const int N = 80;
char t1, t2;
char yuanwen[2500], yiwen[2500];
struct information
{
	char u[2];
}change;

struct result{
	char p[30];
}q;

struct matrix{
	bool element[n][n];
};

information compare(char a[]){
	char temp[w][2];
	information ch;
	int cyd[w] = { 0 };
	int e = 0;
	for (int i = 0; i < w; i++)
	{
					if (word[strlen(a) - 1][i][0] == '\0')
					{
						cyd[i] = 99999; break;
					}
		for (int j = 0; j < 10; j++)
		{
			if (a[j] == '\0')break;
			if ((a[j] == word[strlen(a) - 1][i][j]) &&( a[j] != '\0'))continue;
			if ((a[j] != word[strlen(a) - 1][i][j]) && (a[j] != '\0') )
			{
				temp[i][0] = a[j];
				temp[i][1] = word[strlen(a) - 1][i][j];
				cyd[i]++;
			}
		}
	}
	bool q=0;

	for (int i = 0; i < w; i++)
	{
			if (cyd[i] == 1)
			{
				 ch.u[0] = temp[i][0];ch.u[1] = temp[i][1];return ch;
			}
		}

		for (int i = 0; i < w; i++){
			if (cyd[i] != 1)ch.u[0] = ch.u[1] = 'a';
			return ch;
		}

}

matrix X;

void zhixing()
{
	for (int j = 0; j < n; j++){
		for (int i = 0; i < n; i++){
			if (i == j) X.element[i][j] = 1;
			else X.element[i][j] = 0;
		}
	}
}

int zimu[30] = {};
int sum = 0;
int paiming[30];
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
matrix multi(matrix P, matrix E);//乘积 P*E
matrix P(int r, int l);//因为初等矩阵跟两个行数有关，所以定义为一个函数
char letter(int t);//将序号转换成字母
int number(char c);//将字母转换成序号
int ref(matrix X, int t);//按照X矩阵返回对应值
matrix fit(matrix X, information ch);


int main(){

	zhixing();
	
	gets_s(yuanwen);
	//q=weidubiao(yuanwen);//获取密文

	//initialize(X,q);

	int counter = 0;
	for (int i = 0; yuanwen[i] != 0; i++)//进行第一次翻译
	{
		if ((yuanwen[i] <= 'Z'&&yuanwen[i] >= 'A') | (yuanwen[i] <= 'z'&&yuanwen[i] >= 'a'))
		{
			yiwen[i] = ref(X, yuanwen[i]);
		}
		else yiwen[i] = yuanwen[i];
		counter++;
	}
	yiwen[counter] = '\0';

		for (int k4 = 0; k4 < N ; k4++){
			for (int k3 = 0; k3 < N - k4; k3++)
			{

				int r = 0, e = 0;
				char words[500][10];
				for (int i = 0; i < N; i++)//打散成单词
				{
					for (int j = 0; j < 10; j++)
					{
						if (yiwen[r] == '\0')
						{
							e = 1; r++; break;
						}

						if (yiwen[r] == ' ')
						{
							words[i][j] = '\0'; r++; break;
						}
						else words[i][j] = yiwen[r];
						r++;

					}
					if (e == 1)break;
				}


				X = fit(X, compare(words[k3])); //将返回值带入fit函数

				for (int i = 0; yuanwen[i] != 0; i++)
				{
					if ((yuanwen[i] <= 'Z'&&yuanwen[i] >= 'A') | (yuanwen[i] <= 'z'&&yuanwen[i] >= 'a'))
					{
						yiwen[i] = letter(ref(X, number(yuanwen[i])));
					}
					else yiwen[i] = yuanwen[i];
					counter++;
				}

				//再次翻译
			}
		}
		puts(yiwen);
	
	
	cin.get();
	cin.get();


	return 0;
}


yiwen[i] = ref(X, yuanwen[i]);


char letter(int t){
	char c;
	switch (t){
	case 0:c = 'a'; break;
	case 1:c = 'b'; break;
	case 2:c = 'c'; break;
	case 3:c = 'd'; break;
	case 4:c = 'e'; break;
	case 5:c = 'f'; break;
	case 6:c = 'g'; break;
	case 7:c = 'h'; break;
	case 8:c = 'i'; break;
	case 9:c = 'j'; break;
	case 10:c = 'k'; break;
	case 11:c = 'l'; break;
	case 12:c = 'm'; break;
	case 13:c = 'n'; break;
	case 14:c = 'o'; break;
	case 15:c = 'p'; break;
	case 16:c = 'q'; break;
	case 17:c = 'r'; break;
	case 18:c = 's'; break;
	case 19:c = 't'; break;
	case 20:c = 'u'; break;
	case 21:c = 'v'; break;
	case 22:c = 'w'; break;
	case 23:c = 'x'; break;
	case 24:c = 'y'; break;
	case 25:c = 'z'; break;
	}
	return c;
}

int number(char c){
	int t = 0;
	switch (c){
	case 'A':
	case 'a':t = 0; break;
	case 'B':
	case 'b':t = 1; break;
	case 'C':
	case 'c':t = 2; break;
	case 'D':
	case 'd':t = 3; break;
	case 'E':
	case 'e':t = 4; break;
	case 'F':
	case 'f':t = 5; break;
	case 'G':
	case 'g':t = 6; break;
	case 'H':
	case 'h':t = 7; break;
	case 'I':
	case 'i':t = 8; break;
	case 'J':
	case 'j':t = 9; break;
	case 'K':
	case 'k':t = 10; break;
	case 'L':
	case 'l':t = 11; break;
	case 'M':
	case 'm':t = 12; break;
	case 'N':
	case 'n':t = 13; break;
	case 'O':
	case 'o':t = 14; break;
	case 'P':
	case 'p':t = 15; break;
	case 'Q':
	case 'q':t = 16; break;
	case 'R':
	case 'r':t = 17; break;
	case 'S':
	case 's':t = 18; break;
	case 'T':
	case 't':t = 19; break;
	case 'U':
	case 'u':t = 20; break;
	case 'V':
	case 'v':t = 21; break;
	case 'W':
	case 'w':t = 22; break;
	case 'X':
	case 'x':t = 23; break;
	case 'Y':
	case 'y':t = 24; break;
	case 'Z':
	case 'z':t = 25; break;
	}
	return t;
}



int ref(matrix X, char t){
	for (int i = 0; i < 26; i++)
	if (X.element[i][number(t)] == 1)return letter(i);
}

void initialize(matrix X, result p){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++)X.element[i][j] = 0;
	}
	X.element[4][p.p[0]] = 1;
	X.element[19][p.p[1]] = 1;
	X.element[0][p.p[2]] = 1;
	X.element[14][p.p[3]] = 1;
	X.element[8][p.p[4]] = 1;
	X.element[13][p.p[5]] = 1;
	X.element[18][p.p[6]] = 1;
	X.element[7][p.p[7]] = 1;
	X.element[17][p.p[8]] = 1;
	X.element[3][p.p[9]] = 1;
	X.element[11][p.p[10]] = 1;
	X.element[2][p.p[11]] = 1;
	X.element[20][p.p[12]] = 1;
	X.element[12][p.p[13]] = 1;
	X.element[22][p.p[14]] = 1;
	X.element[5][p.p[15]] = 1;
	X.element[6][p.p[16]] = 1;
	X.element[24][p.p[17]] = 1;
	X.element[15][p.p[18]] = 1;
	X.element[1][p.p[19]] = 1;
	X.element[21][p.p[20]] = 1;
	X.element[10][p.p[21]] = 1;
	X.element[9][p.p[22]] = 1;
	X.element[23][p.p[23]] = 1;
	X.element[16][p.p[24]] = 1;
	X.element[25][p.p[25]] = 1;
}

result weidubiao(char wenzhang[])
{
	memset(zimu, 0, sizeof(zimu));
	memset(paiming, 0, sizeof(paiming));
	int len11 = strlen(wenzhang);
	for (int i = 0; i < len11; i++)
	{
		pd(wenzhang[i]);
	}
	int u;
	for (int i = 0; i < 26; i++)
	{
		for (u = 0; u < 26; u++)
		{
			if (zimu[i] < zimu[u])
				paiming[i]++;
		}
	}
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
			if (paiming[you]>paiming[i] && (paiming[you] + couu) == paiming[i])
				paiming[you] += couu;
		}
		paiming[i] += couu;
	}
	result p;
	for (int up = 0; up < 26; up++)
	{
		p.p[up] = ('a' + paiming[up] - 1);
	}
	return p;
}



//定义初等矩阵
matrix P(char r, char l){
	matrix P;
	for (int j = 0; j < n; j++){
		for (int i = 0; i < n; i++){
			if (i == j) P.element[i][j] = 1;
			else P.element[i][j] = 0;
		}
	}
	P.element[number(r)][number(r)] = 0;
	P.element[number(l)][number(l)] = 0;

	P.element[number(r)][number(l)] = 1;
	P.element[number(l)][number(r)] = 1;
	return P;
}


//定义矩阵乘积
matrix multi(matrix P, matrix E){
	matrix ans;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			bool sum = 0;
			for (int s = 0; s < n; s++){
				sum = sum + P.element[i][s] * E.element[s][j];
			}
			ans.element[i][j] = sum;
		}
	}
	return ans;
}


//修改X矩阵
matrix fit(matrix X, information ch){
	X = multi(P(number(ch.u[0]), number(ch.u[1])), X);
	return X;
}

