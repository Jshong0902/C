#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	char n[21];
	
	scanf("%s", &n);//'\0'이 아니면 for문 실행 
	for(i=0 ; n[i] != '\0' ; i++){
		printf("\'%c\'\n", n[i]);
	}
	return 0;
}
