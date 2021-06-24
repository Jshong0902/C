#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int f(int n){
	int i, j, sum=1, sum2=0;
	for (i=1 ; i<=10 ; i++){
		printf("%d=%d*%d\n", sum*i, sum, i);
		sum*=i;
	}
	return sum;
}


int main() {
	int i, j, a, b, n, r, sum=0;
	scanf("%d", &n);
	printf("%d", f(n));
}
