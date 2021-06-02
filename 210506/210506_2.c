//1416È«Áø¼­ 
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int f(int a, int b)
{
	if(a>b) return a;
	else return b;
}

int main(int argc, char *argv[]) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", f(a, f(b, c)));
}
