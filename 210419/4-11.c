#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//�Ǽ������� �Է¹޾� �Ҽ� 2° �ڸ����� �ݿø��ϴ� ���α׷�
//23.56 -->23.60000000 
int main(int argc, char *argv[]) {
	double a, b, c;
	scanf("%lf", &a);
	//1.�Ҽ����� .1 �� ������ ������ ���� *10�� �Ѵ�.
	a*=10;//235.6
	//2.+0.5�� �Ѵ�.
	a+=0.5;
	//3.int�� ĳ���� �Ҽ��� ���ϸ� �ڸ���.
	a=(int)a;//236
	a/=10;
	printf("%f\n9", a);	
	return 0;	  
}
