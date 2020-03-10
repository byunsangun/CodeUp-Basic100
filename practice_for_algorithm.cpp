#include <stdio.h>
#include <math.h>

int main(void){
	int a,c;
	int result;
	int b[10000];
	scanf("%d", &a);
	for(int i = 0; i<a; i++){
		scanf("%d", &c);
		b[i] = c;
	}
	result = b[0];
	for(int i = 0; i<a; i++){
		if(result >= b[i]){
			result = b[i];
		} else{
			continue;
		}
	}
	printf("%d", result);
}

