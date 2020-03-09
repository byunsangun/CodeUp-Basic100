#include <stdio.h>

int main(void){
	char a;
	scanf("%c ", &a);
	while(1){
		if(a !='q'){
		printf("%c\n",a);
		scanf("%c ", &a);	
		}
		else{
			printf("q");
			break;
		}
	}
	
	
}
