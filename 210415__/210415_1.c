//1416È«Áø¼­ 
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i, j;
	
	for (i=5 ; i>=1 ; i--){
		for (j=5 ; j>=i ; j--){
			printf("*");	
		}
		printf ("\n");
	}
}
