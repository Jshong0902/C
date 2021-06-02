#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, c;
	char b;
	scanf("%d %c %d", &a, &b, &c);
	switch(b){
		case '+': printf("%d + %d = %d", a, c, a+c); break;
		case '-': printf("%d - %d = %d", a, c, a-c); break;
		case '/': printf("%d / %d = %.2f", a, c, (double)a/c); break;
		case '*': printf("%d * %d = %d", a, c, a*c); break;
	}
	return 0;
}
