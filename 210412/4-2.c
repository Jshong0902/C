#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int r1=0, r2=0;
	int a=3, b=4, c=5, d=6;
	r1=a*b+c>=d && d/a-b!=0;
	
	r2=d%b+ ++a*c-- || c- --a>=10;
	printf("%d \n%d", r1, r2);
}
