#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, n1, n2, n3, i, sum=0;
	printf("자연수 입력 :");
	scanf("%d", &n);
	n1=n/100;
	n2=n%100/10;
	n3=n-(n1*100+n2*10);
	sum=n1+n2+n3;
	printf("%d\n", sum);
	return 0;
}
