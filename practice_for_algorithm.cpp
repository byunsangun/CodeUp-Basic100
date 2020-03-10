#include <stdio.h>
#include <math.h>

int main(void){
	int arr[11][11];
	int a;
	for(int i=1; i<=10; i++){
		for(int j=1; j<=10; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	int x=2;
	int y=2;
	if(arr[x][y] == 2){
		arr[x][y] = 9;
	}
	
	while(arr[x][y] == 0){
		arr[x][y] = 9;
		if(arr[x][y+1] == 0){
			y = y+1;
		}
		else if(arr[x][y+1] == 2){
			arr[x][y+1] = 9;
			break;
		}
		else if(arr[x+1][y] == 2){
			arr[x+1][y] = 9;
			break;
		}
		else{
			x = x+1;
		}		
	}
	
	


	for(int i = 1; i<=10; i++){
		for(int j =1; j<= 10; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
}
