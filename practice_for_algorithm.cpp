#include <stdio.h>

int main (void){
	int first, last;
	scanf("%d-%d", &first, &last);
	printf("%06d%07d", first, last);	
	return 0;  
}

