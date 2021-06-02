//1416홍진서 
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score[20];
	int str[20]
	int i, sum=0;
	for(i=0 ; i<20 ; i++){
		printf("%d번 학생의 프로그래밍 성적을 입력하시오: ", i+1);
		scanf("%d", &score[i]);
	}
	for (i=0 ; i<20 ; i++)
		sum+=score[i];
	printf("합계 : %d\n", sum);
	printf("평균 : %2.lf\n", (double)sum/5);
}
