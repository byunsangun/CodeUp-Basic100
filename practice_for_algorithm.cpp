#include <stdio.h>

int main(void){
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%.2f MB", (float)a*b*c/8/1024/1024);
	
}
