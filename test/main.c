#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a, b, c, max;
	scanf("%d %d %d", &a, &b, &c);
	
	if (a>b){
		max=a;
	}
	else if (a<b){
		max=b;
	}
	
	if (max<c){
		printf("%d", c);
	}
	else
	{
		printf("%d", max);
	}
}
