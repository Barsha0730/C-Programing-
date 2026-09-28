//2+5+8+11+14...upto n terms, w.c.p to calculate sum of the given series 
#include <stdio.h>
int main () {
	int i=1,term=2,n, s=0;
	printf("Enter a value : ");
	scanf("%d", &n);
	while(i<=n) {
		s+=term;
		term+=3;
		i++;
	}
	printf("The sum of the series is : %d\n", s);
	return 0;
}
