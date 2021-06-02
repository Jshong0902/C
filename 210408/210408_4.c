#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ask;
	scanf("%c", &ask);
	switch(ask){
		case 'A': printf("apple\n");
			break;
		case 'B': printf("banana\n");
			break;
		case 'C': printf("carrot\n");
			break;
		default	: printf("I love everthing!");
	}
}
