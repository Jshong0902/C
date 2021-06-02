#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	a=2, b=3, c=4;  
	a=++a + ++a;//8 = 4 + 4
	b=++c + c++ + c++;//17
	
	printf("%d", b);
}
