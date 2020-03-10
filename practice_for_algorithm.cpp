#include <stdio.h>
#include <math.h>

int main(void){
	long long a,b,c;
	scanf("%lld %lld %lld", &a, &b, &c);
	a = a * pow(b,c-1);
	printf("%lld", a);
}
