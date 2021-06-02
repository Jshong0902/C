//1416홍진서 
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	int a, b, c, bash;
	printf("A, B, C의 길이를 입력하세요(C의 길이가 가장 긴 길이입니다.)\n");
	scanf("%d %d %d", &a, &b, &c);
	
	bash=a+b;
	if (c<a+b)
		printf("YES");
	else
		printf("NO");	
	}
