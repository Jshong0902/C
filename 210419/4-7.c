#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=1, b=2, c=3, d=4;
	printf("1번:%d\n", b*a>b?a:b);
	a=1, b=2, c=3, d=4;
	printf("2번:%d\n", c-=a<b?a-b:b-a);
	a=1, b=2, c=3, d=4;
	printf("3번:%d\n", d%=c<d?c++:d++);
	a=1, b=2, c=3, d=4;
	printf("4번:%d\n", c+=b<b?++a:b++);
	a=1, b=2, c=3, d=4;
	printf("5번:%d\n", d/=d%3?a*b:d%c);
	a=1, b=2, c=3, d=4;
	printf("6번:%d\n", a+=++a%b++?c*d:b/c);
}
