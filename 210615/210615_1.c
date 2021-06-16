/*codeup1272
1, 10, 2.20번호순으로 일정한 규칙에 따라 돈 줌
input:1 2
output:11
*/ 
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n1, n2, sum=0;
	scanf("%d %d", &n1,  &n2);
	if(n1%2==0){
		sum+=n1*5;
	}
	else{
		sum+=n1/2+1;
	}
	if(n2%2==0){
		sum+=n2*5;
	}
	else{
		sum+=n2/2+1;
	}
	printf("%d", sum);
	return 0;	
}
