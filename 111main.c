//����� ���� �Լ��� ������ �ۼ��մϴ�. 

#include <stdio.h>
// ����� ���� �Լ� ����
bool f(int y)
{
	if (y%100==0){
		return 0;
	}
	else if (y%4==0){
		return 1;
	}
}
// main() �Լ� 
int main() {
	int year, a, b, c;
	scanf("%d", &year);
	if (year%4==!0){
		printf("���");
	}
	else{
		int i=f(year);
		if (i==1){
			printf("����");
		}
		else if(i==!1){
			printf("���");
		}
	}
	
	return 0;
}
