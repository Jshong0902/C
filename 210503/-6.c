#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, res;
	scanf("%d", &n);
	res=(n%10*10) + (n/10)
	res*=2;
	res=res%100;
	printf("%d\n", res);
	if (res<=50)
		printf("GOOD");
	else
		printf("OH MY GOD");
	return 0;
}
