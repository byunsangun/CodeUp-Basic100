#include <stdio.h>
#include <math.h>

int main(void){
	long long a,b,c;
	int day=1;
	scanf("%lld %lld %lld", &a, &b, &c);
	while(day%a != 0 || day%b != 0 || day%c != 0){
		day++;
	}
	printf("%d", day);
}

