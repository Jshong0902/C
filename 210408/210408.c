//1416ȫ���� 
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	int a, b, c, bash;
	printf("A, B, C�� ���̸� �Է��ϼ���(C�� ���̰� ���� �� �����Դϴ�.)\n");
	scanf("%d %d %d", &a, &b, &c);
	
	bash=a+b;
	if (c<a+b)
		printf("YES");
	else
		printf("NO");	
	}