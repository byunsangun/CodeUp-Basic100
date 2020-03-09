#include <stdio.h>

int main (void){
	int a,b;
	scanf("%d", &a);
	reget: 
	scanf("%d", &b);
	printf("%d ", b);
	if(a-- != 1) goto reget;
	}

