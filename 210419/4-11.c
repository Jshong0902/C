#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//실수값으르 입력받아 소수 2째 자리에서 반올림하는 프로그램
//23.56 -->23.60000000 
int main(int argc, char *argv[]) {
	double a, b, c;
	scanf("%lf", &a);
	//1.소수점을 .1 맨 끝으로 보내기 위해 *10을 한다.
	a*=10;//235.6
	//2.+0.5를 한다.
	a+=0.5;
	//3.int로 캐스팅 소수점 이하를 자른다.
	a=(int)a;//236
	a/=10;
	printf("%f\n9", a);	
	return 0;	  
}
