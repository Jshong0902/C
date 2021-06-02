#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a, b, c, max, min, sowon;
	scanf("%d %d %d", &a, &b, &c);
	
	if (a>b){
		max=a;
	}
	else if (a<b){
		max=b;
	}
	
	if (max<c){
		max=c;
	}
	
	if (a==max){
		if (b>c){
			printf("%d", b);
		}
		else if (b<c){
			printf("%d", c);
		}
	}
	else if (b==max){
		if (a<c){
			printf("%d", c);
		}
		else if (a>c){
			printf("%d", a);
		}
	else if (c==max){
		if (a<b){
			printf("%d", b);
		}
		else if (a>b){
			printf("%d", a);
		}
	}
	}	
}
