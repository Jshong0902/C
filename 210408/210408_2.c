//1416홍진 
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	printf("선분 a, b, c를 입력하세요");
	scanf("%d %d %d", &a, &b, &c);
	
	if (c < a + b && b < a + c && a < b + c)
		printf("YES\n");
	else
		printf("NO\n");
}
