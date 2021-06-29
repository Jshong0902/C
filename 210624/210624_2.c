#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, n=1;
	for (i=1 ; i<=3 ; i++){
		for (j=1 ; j<=4 ; j++){
			printf("%d ", n);
			n+=1;
		}
		puts("");
	}	
}
