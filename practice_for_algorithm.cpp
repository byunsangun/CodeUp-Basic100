#include <stdio.h>

int main(void){
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	a = a + b * (c-1);
	printf("%d", a);
}
