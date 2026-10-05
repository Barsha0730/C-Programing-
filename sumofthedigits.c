//w.c.p to find the sum of digits of an whole number
#include <stdio.h>
int main () {
	int n,sum=0,digit;
	printf("Enter a number : ");
	scanf("%d", &n);
	while (n>0) {
		digit=n%10;
		sum+=digit;
		n/=10;
	}
	printf("The sum of the digits are : %d\n", sum);
	return 0;
}
