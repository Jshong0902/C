#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	int score;
	printf("������ ������ �Է��ϼ��� :");
	scanf("%d", &score);
	
	if (score >= 90) printf("��\n");
	else if (score >= 80) printf("��\n");
	else if (score >= 70) printf("��\n");
	else if (score >= 60) printf("��\n");
	else printf("��\n");
}
*/
int main(){
	int score;
	printf("������ ������ �Է��ϼ���:");
	scanf("%d", &score);
	score /=10;
	
	switch(score)
	{
		case 10: printf("A\n");
			break;
		case 9: printf("B\n");
			break;
		case 8: printf("C\n");
			break;
		case 7: printf("D\n");
			break;
		default: printf("E\n");
	}
}
