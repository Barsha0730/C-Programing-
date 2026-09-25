//w.c.p to display the odd numbers from 1 to n
#include <stdio.h>
int main () {
	int n,i=1;
	printf("Enter a number :");
	scanf("%d", &n);
	printf("The odd numbers are %d\n", n);
	while(i<=n) {
	   	printf("%d\n", i);
	   i+=2;
	}
	return 0;
} 
