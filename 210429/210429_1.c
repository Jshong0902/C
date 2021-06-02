//1416È«Áø¼­ 
#include <stdio.h>Àú 
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *p, i;
	int a[5]={55, 78, 95, 66, 96};
	p=a;
	for(i=0 ; i<5 ;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i=0 ; i<5 ; i++){
		printf("%d ", *(p+i));
		printf("%d ", *p+i);
	}
	printf("\n");
}
