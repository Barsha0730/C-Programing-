//w.c.p for star diamond pattern
#include <stdio.h>
int main() {
	int i,j,k,l,n;
	printf("Enter the limit : ");
	scanf("%d", &n);
	for(i=1;i<=n;i++) {
		for(j=1;j<=n-i;j++) {
			printf(" ");
		}
		for(k=1;k<=i;k++) {
			printf("*");
		}
		for(l=1;l<i;l++) {
			printf("*");
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--) {
		for(j=1;j<=n-i;j++) {
			printf(" ");
		}
		for(k=1;k<=i;k++) {
			printf("*");
		}
		for(l=1;l<i;l++) {
			printf("*");
		}
		printf("\n");
	 }
	 return 0;
}
