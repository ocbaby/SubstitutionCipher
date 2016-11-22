/*

#include"wordlist.h"
#include"iostream"
using namespace std;
struct information
{
	char m;
	char n;
};
struct scrape{
	char words[500][10];
};
information compare(char a[]);
int main(){
	char yiwen[25000];
	gets_s(yiwen);

	int r = 0, j = 0;
	char words[500][10];
	for (int i = 0; i < 500; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (yiwen[r] == '\0')
			{
				j = 1; break;
			}
			if (yiwen[r] == ' ')
			{
				words[i][j] = '\0'; break;
			}
			else words[i][j] = yiwen[r];
			r++;
		}
		if (j == 1)break;
	}



	cin.get();
	cin.get();

	

	return 0;
}

information compare(char a[])//²âÊÔ×î´îÅäµÄµ¥´Ê
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

*/