#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	scanf("%d.%d.%d.", &a, &b, &c);
	printf("%04d.%02d.%02d", a, b, c);
	return 0;
}
