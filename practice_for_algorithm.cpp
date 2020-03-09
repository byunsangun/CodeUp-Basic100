#include <stdio.h>

int main(void){
	int a;
	int sum = 0;
	scanf("%d", &a);
	for(int i = 0; i<a+1; i++){
		if(i % 2 == 0){
			sum = 	sum + i;
		}
	}
	printf("%d", sum);
}
