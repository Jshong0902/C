#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
input:
	scanf("%d", &n);
	if (n !=0){
		printf("%d\n");
//		scanf(" ");
		goto input;
	}
	if(n==0) return -1;
	return 0;
}
