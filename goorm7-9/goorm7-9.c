//������ ��ĭ ���ڵ� �� �� �� ��
//for �� 4�� �Ѽ�Ʈ le(�޳�),re(������),te(����),(�Ʒ���)
//���� ���α׷� 
#include<stdio.h>
int main(){//i: ��÷��, j: ��÷�� ���
	int a[100][100], num= 0, le, re, te, be;
	int n, i, j;
	scanf("%d",&n);
	re = be = n; //����, �Ʒ� ÷�� = n
	le = te = 1; //��, �� ÷�� = 1
	while (num <= n*n) //(1)
	{
		for(i = le; i <= re  && num <= n * n ; i++){
			a[te][i] = ++num; //(2)
			}
			te++;
		for(i = te;  i <= be && num <= n * n; i++){
			a[i][re] = ++num; //(3)
			}//4
			re--;
		for(i = re;  i >= le && num <= n * n; i--){
			a[be][j] = ++num;
			}
			be--;
		for(i = be;  i >= te && num <= n * n; i--){
			a[i][le] = ++num;
			}
			le++;
	}
	for(i = 1; i <= n; i++, puts("")){
		for(j = 1; j <= n; j++) 
			printf("%d ", a[i][j]);}
	return 0;
}
