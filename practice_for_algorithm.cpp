#include <stdio.h>

int main(void){
	int a,b;
	scanf("%d %d", &a, &b);
	for(int i =1; i<=a; i++){
		for(int n = 1; n<=b; n++){
			printf("%d %d\n", i, n);
		}
	}
	
}
