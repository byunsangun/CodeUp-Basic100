#include <stdio.h>
#include <math.h>

int main(void){
	int a,c;
	int b[23]={};
	scanf("%d", &a);
	for(int i = 0; i<a; i++){
		scanf("%d", &c);
		b[c-1] = b[c-1] +1;
	}
	for(int i = 0; i<23; i++){
		printf("%d ", b[i]);
	}
}

