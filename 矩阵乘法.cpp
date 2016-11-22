/*

#include"iostream";
#include"stdio.h";
using namespace std;
const int n = 26;
struct matrix{
	bool element[n][n];
};
matrix multi(matrix P, matrix E);//乘积 P*E
matrix P(int r, int l);//因为初等矩阵跟两个行数有关，所以定义为一个函数
void print(matrix mat);
int main(){
	//定义单位矩阵
	matrix E;//因为单位矩阵就这一个样子，所以直接定义
	for (int j = 0; j < n; j++){
		for (int i = 0; i < n; i++){
			if (i == j) E.element[i][j] = 1;
			else E.element[i][j] = 0;
		}
	}
	//完成
	
	//使用范例
	cin.get();

	return 0;
}

void print(matrix mat){

	for (int j = 0; j < n; j++){
		for (int i = 0; i < n; i++){
			printf("%d ", mat.element[i][j]);
		}
		cout << endl;
	}
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

*/