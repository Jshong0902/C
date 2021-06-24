//수행은 빈칸 손코딩 꼭 한 번 더
//for 문 4개 한세트 le(왼끝),re(오른끝),te(위끝),(아래끝)
//예시 프로그램 
#include<stdio.h>
int main(){//i: 행첨자, j: 열첨자 사용
	int a[100][100], num= 0, le, re, te, be;
	int n, i, j;
	scanf("%d",&n);
	re = be = n; //오른, 아래 첨자 = n
	le = te = 1; //왼, 위 첨자 = 1
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
