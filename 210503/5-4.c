#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	scanf("%d", &a);
	switch(a){
		case 12:
		case 1:
		case 2: printf("winter"); break;
		case 3:
		case 4:
		case 5: printf("spring"); break;
		case 6:
		case 7:
		case 8: printf("summer"); break;
		case 9:
		case 10:
		case 11: printf("fall"); break;
	}
	return 0;
}
