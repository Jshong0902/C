#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a+b>c && a+c>b && b+c>a){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}