//w.c.p to count the digits of an whole number
#include <stdio.h>
int main () {
	int n,count=0,digit;
	printf("Enter a digit : ");
	scanf("%d", &n);
	while(n!=0) {
		digit=n%10;
		count++;
		n/=10;
	}
	printf("The count of the digits are : %d\n", count);
	return 0;
}
