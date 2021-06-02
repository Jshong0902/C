#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int r1=0, r2=0;
	r1= 3>1 && 5!=5;
	r2= 2==1 || 10>=10;
	printf("%d \n%d", r1, r2);
	return 0;
}
