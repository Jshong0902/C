#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int y, m, d, min;
	printf("��, ��, ���� �Է��ϼ���.");
	scanf("%d %d %d", &y, &m, &d);
	min=y-(m+d);
	if(min%10==0){
		printf("���");
	}
	else{
		printf("�׷�����");
	}
}
