#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=1, b=2, c=3, d=4;
	printf("1��:%d\n", b*a>b?a:b);
	a=1, b=2, c=3, d=4;
	printf("2��:%d\n", c-=a<b?a-b:b-a);
	a=1, b=2, c=3, d=4;
	printf("3��:%d\n", d%=c<d?c++:d++);
	a=1, b=2, c=3, d=4;
	printf("4��:%d\n", c+=b<b?++a:b++);
	a=1, b=2, c=3, d=4;
	printf("5��:%d\n", d/=d%3?a*b:d%c);
	a=1, b=2, c=3, d=4;
	printf("6��:%d\n", a+=++a%b++?c*d:b/c);
}
