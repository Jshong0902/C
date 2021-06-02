#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int h, m;
	scanf("%d %d", &h, &m);
	h=(h+24);
	m=m+(h)*60;
	m=m-30;
	printf("%d %d", (m/60)%24, m%60);
	return 0;
}
