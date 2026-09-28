// w.c.p to calculate the sum of given series - 1+2+4+7+11
#include <stdio.h>
int main () {
	int n,s=0,i=1,term=1;
	printf("Enter a value : ");
	scanf("%d", &n);
	while(i<=n) {
		s+=term;
		term+=i;
		i++;
    }
	printf("The sum of the series is : %d\n", s);
	return 0;
}
