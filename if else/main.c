#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score, pass;
	printf("������ �Է��ϼ���.");
	scanf("%d", &score);z
	printf("�հ����� �Է��ϼ���.:");
	scanf("%d", &pass);
	if (score >= pass){
		printf("�հ�\n");
	}
	else{
		printf("���հ�");
	}
}
