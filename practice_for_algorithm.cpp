#include <stdio.h>
#include <math.h>

int main(void){
	long long a,b,c,d;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	for(int i = 0; i<d-1; i++){
		a = a * b + c;
	}
	printf("%lld", a);
}
