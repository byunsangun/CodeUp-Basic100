#include <stdio.h>
#include <math.h>

int main(void){
	int a[20][20]={};
	int x,y;
	int n;
	scanf("%d", &n);
	for(int i = 0; i<n; i++){
		scanf("%d %d", &x, &y);
		a[x][y] = 1;
	}
	for(int z = 1; z<=19; z++){
		for(int j = 1; j<=19; j++){
			printf("%d ", a[z][j]);
		}
		printf("\n");
	}
}

