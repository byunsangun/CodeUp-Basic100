#include <stdio.h>

int main(void){
	char a;
	char start = 'a';
	scanf("%c", &a);
	do{
		printf("%c ", start);
		start = start + 1;
	}
	while(start < a + 1);
}
