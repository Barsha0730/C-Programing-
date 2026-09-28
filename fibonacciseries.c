// w.c.p to display the fibonacci series - 0,1,1,2,3,5,8...upto n
#include <stdio.h>
int main() {
	int n,i=1,a=0,b=1,c;
	printf("Enter the terms : ");
	scanf("%d", &n);
	while (i<=n) {
		c=a+b;
		printf("%d\t", a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	
	return 0;
}
