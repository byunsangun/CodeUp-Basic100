#include <stdio.h>

int main(void){
	 int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	for(int i = 0; i<a; i++){
		for(int l = 0; l <b; l++){
			for(int n = 0; n<c; n++){
				printf("%d %d %d\n", i, l, n);
			}
		}
}
printf("%d", a*b*c);
	return 0;
}
