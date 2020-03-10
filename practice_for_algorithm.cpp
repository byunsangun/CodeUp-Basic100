#include <stdio.h>
#include <math.h>

int main(void){
	int h,w;
	int l,d,x,y;
	scanf("%d %d", &h, &w);
	int arr[100][100] = {};
	int n;
	scanf("%d", &n);
	for(int i = 1; i<=n; i++){
		scanf("%d %d %d %d", &l, &d, &x, &y);
			if(d == 0){
				for(int j = x; j<=l+x-1; j++){
					arr[x][j] = 1;
				}
			}
			else{
				for(int j = x; j<=l+x-1; j++){
					arr[j][y] = 1;
				}
			}	
	}
	for(int i = 1; i<= h; i++){
		for(int j = 1; j<= w; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
