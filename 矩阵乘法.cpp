/*

#include"iostream";
#include"stdio.h";
using namespace std;
const int n = 26;
struct matrix{
	bool element[n][n];
};
matrix multi(matrix P, matrix E);//�˻� P*E
matrix P(int r, int l);//��Ϊ���Ⱦ�������������йأ����Զ���Ϊһ������
void print(matrix mat);
int main(){
	//���嵥λ����
	matrix E;//��Ϊ��λ�������һ�����ӣ�����ֱ�Ӷ���
	for (int j = 0; j < n; j++){
		for (int i = 0; i < n; i++){
			if (i == j) E.element[i][j] = 1;
			else E.element[i][j] = 0;
		}
	}
	//���
	
	//ʹ�÷���
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


//������Ⱦ���
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

//�������˻�
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