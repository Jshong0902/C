#include <stdio.h>
int main(){//i: 행첨자, j: 열첨자 사용
	int a[50][50], num= 0, le, re, te, be;
	int n, i, j;
	scanf("%d",&n);	
	re = be = n; //오른, 아래 첨자 = n
	le = te = 1; //왼, 위 첨자 = 1
	while(num < n*n){
	 for (i=le ; i<=re && num<=n*n ; i++){
	     a[te][i]=++num;//왼쪽에서 오른쪽
	 }
	 te++;//위쪽 썻으니까 1+
	 for (j=te ; j<=be &&num<=n*n ; j++){
	     a[j][re]=++num;//위쪽에서 아래쪽
	 }
	 re--;//오른쪽 썻으니까 1-
	 for (i=re ; i>=le &&num<=n*n ; i--){
	     a[be][i]=++num;//오른쪽에서 왼쪽
	 }
	 be--;//아래쪽 썻으니까 1-
	 for (j=be ; j>=te &&num<=n*n ; j--){
	     a[j][le]=++num;//아래에서 위쪽
	 }
	 le++;//왼쪽 썻으니까 1+
	}
	for (i=1 ; i<=n ; i++){
	    for (j=1 ; j<=n ; j++){
	        printf("%2d ", a[i][j]);
	    }
	    puts("");
	}
}