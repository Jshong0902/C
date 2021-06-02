#include <stdio.h>
#include <stdlib.h>

//1416홍진서 

int main(int argc, char *argv[]) {
	char str[21];
	int i, j[21];
	printf("Input Bic Str :");
	scanf("%s", &str);
/*	for (i=0 ;str[i]!=NULL; i++){
		printf("%c", str[i]+32);//str[i]값이 null이 아닐 때까지 반복
}*/
	for (i=0 ;str[i]!=NULL; i++){
		if (str[i]>=65 && str[i]<=90){
			printf("%c", str[i]+('a'-'A'));/*str[i]값이 null이 아닐 때까지 반복*/	
		}
		else if(str[i]>=97 && str[i]<=122){
			printf("%c", str[i]+('A'-'a'));
		}
		else{
			printf("%c", str[i]);
		}		
}


}
