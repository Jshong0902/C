#include <stdio.h>
#include <stdlib.h>

//1416ȫ���� 

int main(int argc, char *argv[]) {
	char str[21];
	int i, j[21];
	printf("Input Bic Str :");
	scanf("%s", &str);
/*	for (i=0 ;str[i]!=NULL; i++){
		printf("%c", str[i]+32);//str[i]���� null�� �ƴ� ������ �ݺ�
}*/
	for (i=0 ;str[i]!=NULL; i++){
		if (str[i]>=65 && str[i]<=90){
			printf("%c", str[i]+('a'-'A'));/*str[i]���� null�� �ƴ� ������ �ݺ�*/	
		}
		else if(str[i]>=97 && str[i]<=122){
			printf("%c", str[i]+('A'-'a'));
		}
		else{
			printf("%c", str[i]);
		}		
}


}
