//1416ȫ���� 
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=10;
	int *pa;
	
	pa=&a;
	*pa=1000;
	
	printf("�����ͷ� a �� ��� : %d\n", *pa);
	printf("���������� a �� ��� : %d\n", a);
	
	return 0;
}
