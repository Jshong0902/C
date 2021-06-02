#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("\n-- General Data Type Size --\n");
	printf("char size : %d byte\n", (int)sizeof(char));
	printf("short size : %d byte \n", (int)sizeof(short));
	printf("int size : %d byte\n", (int)sizeof(int));
	printf("long size : %d byte\n", (int)sizeof(long));
	printf("double size : %d byte\n", (int)sizeof(double));
	printf("long double size : %d byte\n", (int)sizeof(long double));
	return 0;
}
