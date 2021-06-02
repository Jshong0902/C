//사용자 정의 함수를 스스로 작성합니다. 

#include <stdio.h>
// 사용자 정의 함수 선언
bool f(int y)
{
	if (y%100==0){
		return 0;
	}
	else if (y%4==0){
		return 1;
	}
}
// main() 함수 
int main() {
	int year, a, b, c;
	scanf("%d", &year);
	if (year%4==!0){
		printf("평년");
	}
	else{
		int i=f(year);
		if (i==1){
			printf("윤년");
		}
		else if(i==!1){
			printf("평년");
		}
	}
	
	return 0;
}
