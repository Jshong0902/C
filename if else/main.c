#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score, pass;
	printf("점수를 입력하세요.");
	scanf("%d", &score);z
	printf("합격점을 입력하세요.:");
	scanf("%d", &pass);
	if (score >= pass){
		printf("합격\n");
	}
	else{
		printf("불합격");
	}
}
