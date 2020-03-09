#include <stdio.h>

int main(void){
	int a;
	int b = 0;
	scanf("%d", &a);
	for(int i = 0; i<a+1; i++){
		printf("%d ", b + i);
	}
}
