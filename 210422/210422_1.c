//1416ȫ���� 
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score[20];
	int str[20]
	int i, sum=0;
	for(i=0 ; i<20 ; i++){
		printf("%d�� �л��� ���α׷��� ������ �Է��Ͻÿ�: ", i+1);
		scanf("%d", &score[i]);
	}
	for (i=0 ; i<20 ; i++)
		sum+=score[i];
	printf("�հ� : %d\n", sum);
	printf("��� : %2.lf\n", (double)sum/5);
}
