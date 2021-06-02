#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a[5]= {'K', 'O', 'R', 'E', 'A'};
	printf("%c\n", a[1]);
	printf("%s\n", a);
	char b[6]={'K', 'O', 'R', 'E', 'A', '\0'};
	printf("%s\n", b);
	char c[6]="KOREA";
	printf("%s\n", c);
}
