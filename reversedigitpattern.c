/*w.c.p for
12345
 1234
  123
   12
    1

*/
#include <stdio.h>
int main () {
	int i,j,k;
	for(i=5;i>=1;i--) {
		for(j=1;j<=(6-i);j++) {
			printf(" ");
		}
		for(k=1;k<=i;k++) {
			printf("%d", k);
		}
		printf("\n");
	}
	return 0;
}
