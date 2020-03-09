#include <stdio.h>

int main(void){
	int a;
	int sum = 0;
	scanf("%d", &a);
	for(int i =0; i<a; i++){
		if(sum < a){
			sum = sum + i;
			continue;
		}
		else{
			printf("%d", i-1);
			break;
		}
	}
	
}
