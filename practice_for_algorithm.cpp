#include <stdio.h>

int main(void){
	 int a;
	scanf("%X", &a);
	for(int i = 1; i<=a; i++){
		if(i % 3 == 0){
			printf("X ");
		}
		else{
		
		printf("%d ",i);
	}
}
	return 0;
}
