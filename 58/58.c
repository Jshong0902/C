#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("%d %d\n", 3==2, 3!=2);
	printf("%d %d\n", 3>2, 3<=2);
	printf("%d\n", (3>2) && (3<=2));
	printf("%d\n", (3>2) || (3<=2));
	printf("%d\n", !(3>2));
}
