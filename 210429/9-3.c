//1416ȫ���� 
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=10, b=15, total;
	double avg;
	int *pa, *pb;
	int *pt = &total;
	double *pg = &avg;
	
	pa= &a;
	pb=&b;
	
	*pt = *pa+*pb;
	*pg = *pt / 2.0;
	
	printf("�� ������ �� : %d, %d\n", *pa, *pb);
	printf("�� ������ �� : %d\n", *pt);
	printf("�� ������ ��� : %.1lf\n", *pg);
	
	return 0;
}
