#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	printf("�ﰢ���� 3���� ���̸� �Է��ϼ���.");
	scanf("%d %d %d", &a ,&b, &c);
	if (a+b <= c) printf("�ﰢ�� �ƴ�");
	else if(a==b && b==c) printf("���ﰢ��");
	else if(a==b || b==c) printf("�̵�ﰢ��");
	else if(a*a + b*b == c*c) printf("�����ﰢ��");
	else printf("�ﰢ���ƴ�");
	return 0; 
}
