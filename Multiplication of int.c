//w.c.p which accepts an integer number and print the multiplication of the digits
#include<stdio.h>
int main () {
	int n, i=1,x;
	printf("Enter the number : ");
	scanf("%d", &n);
	while (n!=0) {
		x=n%10;
		i*=x;
		n=n/10;
	}
	printf("The result is : %d\n", i);
	return 0;
}
