#include <stdio.h>
#include <math.h>

int main(void){
	int a,c;
	int b[10000]={};
	scanf("%d", &a);
	for(int i = 1; i<=a; i++){
		scanf("%d", &c);
		b[i] = c;
	}
	for(int i = 1; i<=a; i++){
		printf("%d ", b[a-i+1]);
	}
}

