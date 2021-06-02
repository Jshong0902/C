#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	long long val=1;
	int n =31;
	for (i =1 ; i <=n ; i++){
		val*=2;
	}
	printf("%lld", val);
	return 0;
}
