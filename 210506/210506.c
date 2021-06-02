#include <stdio.h>
#include <stdlib.h>
//1416È«Áø¼­ 
int min(int a, int b)
	{
		if(a>b)return b;
		else return a;
	} 
	
int add(int a, int b)
{
	return a+b;
}
int sub(int a, int b)
{
	if (a>b) return a-b;
	else return b-a;    
}

int main(int argc, char *argv[]) {
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	printf("%d\n", min(n1, n2));
	printf("%d\n", add(n1, n2));
	printf("%d\n", sub(n1, n2));
}
