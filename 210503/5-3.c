#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int year, f, t;
	printf("연도를 입력하세요");
	scanf("year", &year);
	if (year%4==0 && year%100!=0){
		printf("yes");
	}
	else if (year%400==0){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}
