#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a, b, m=-0x7FFFFFFF, s=1, i;
	scanf("%lf %lf",  &a, &b);
	if(m<a+b) m=a+b;
	if(m<a-b) m=a-b;
	if(m<a*b) m=a*b;
	if(m<a/b) m=a/b;
	if(m<b/a) m=b/a;
	for(i=0 ; i<b ; i++) s=s*a;
	if(m<s) m=s;
	s=1;
	for (i=0 ; i<b ; i++) s=s*a;
	if(m<s) m=s;
		printf("%lf", m);
}
