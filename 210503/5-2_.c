#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	printf("삼각형의 3변의 길이를 입력하세요.");
	scanf("%d %d %d", &a ,&b, &c);
	if (a+b <= c) printf("삼각형 아님");
	else if(a==b && b==c) printf("정삼각형");
	else if(a==b || b==c) printf("이등변삼각형");
	else if(a*a + b*b == c*c) printf("직각삼각형");
	else printf("삼각형아님");
	return 0; 
}
