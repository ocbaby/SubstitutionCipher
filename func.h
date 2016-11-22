#include"cstring"
#include"wordlist.h"
#include"iostream"
const int w = 25;
const int n = 26;
struct matrix{
	bool element[n][n];
};
struct information
{
	char m;
	char n;
};


information compare(char a[])//测试最搭配的单词
{
	char temp[w][2];
	information change;
	int cyd[w] = { 0 };
	if (strlen(a) > 0)
	{
		for (int i = 0; i < w; i++)
		{
			if (word[strlen(a) - 1][i][0] == '\0'){
				cyd[i] = 99999; continue;
			}
			for (int j = 0; j < 10; j++)
			{
				if (a[j] == '\0')break;
				else if (a[j] == word[strlen(a) - 1][i][j])continue;
				else {
					temp[i][0] = a[j];
					temp[i][1] = word[strlen(a) - 1][i][j];
					cyd[i]++;
				}
			}
		}
		for (int i = 0; i < w; i++){
			if (cyd[i] == 0)change.m = change.n = 'a';
			return change;
		}
		for (int i = 0; i < w; i++){
			if (cyd[i] == 1){
				change.m = temp[i][0];
				change.n = temp[i][1];
				return change;
			}
		}
	}
}





int ref(matrix X, int t){
	for (int i = 0; i < 26; i++)
	if (X.element[i][t] == 1)return i;
}


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



//定义初等矩阵
matrix P(int r, int l){
	matrix P;
	for (int j = 0; j < n; j++){
		for (int i = 0; i < n; i++){
			if (i == j) P.element[i][j] = 1;
			else P.element[i][j] = 0;
		}
	}
	P.element[r][r] = 0;
	P.element[l][l] = 0;

	P.element[r][l] = 1;
	P.element[l][r] = 1;
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

matrix fit(matrix X, char m, char n){
	return X = multi(P(number(m), number(n)), X);
}
matrix manuel(matrix X){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++)X.element[i][j] = 0;
	}
	X.element[4][21] = 1;
	X.element[19][25] = 1;
	X.element[0][11] = 1;
	X.element[14][7] = 1;
	X.element[8][8] = 1;
	X.element[13][22] = 1;
	X.element[18][6] = 1;
	X.element[7][14] = 1;
	X.element[17][18] = 1;
	X.element[3][17] = 1;
	X.element[11][12] = 1;
	X.element[2][3] = 1;
	X.element[20][24] = 1;
	X.element[12][1] = 1;
	X.element[22][10] = 1;
	X.element[5][23] = 1;
	X.element[6][5] = 1;
	X.element[24][4] = 1;
	X.element[15][13] = 1;
	X.element[1][19] = 1;
	X.element[21][20] = 1;
	X.element[10][16] = 1;
	X.element[9][0] = 1;
	X.element[23][2] = 1;
	X.element[16][9] = 1;
	X.element[25][15] = 1;
	return X;
}
