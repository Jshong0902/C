#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	int score;
	printf("과목의 점수를 입력하세요 :");
	scanf("%d", &score);
	
	if (score >= 90) printf("수\n");
	else if (score >= 80) printf("우\n");
	else if (score >= 70) printf("미\n");
	else if (score >= 60) printf("양\n");
	else printf("가\n");
}
*/
int main(){
	int score;
	printf("과목의 점수를 입력하세요:");
	scanf("%d", &score);
	score /=10;
	
	switch(score)
	{
		case 10: printf("A\n");
			break;
		case 9: printf("B\n");
			break;
		case 8: printf("C\n");
			break;
		case 7: printf("D\n");
			break;
		default: printf("E\n");
	}
}
