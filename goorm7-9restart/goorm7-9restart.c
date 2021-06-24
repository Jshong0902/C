#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[100][100], te, be, re, le, n, i, j, k, l, num;
	scanf("%d", &n);
	te=le=1;
	re=be=n;
	while (num <n*n){
		for (i=le ; i<=n ; i++){
			a[te][i]=++num;
		}
		te++;
		for (j=re ; j<=n ; j++){
			a[j][re]=++num;
		}
		re++;
		for (k=be ; k<=n ; k--{
			a[be][k]=++num;
		}
		be++;
		for (l=le ; l<=n ; l--){
			a[l][le]=++num; q
		}
	}

}
