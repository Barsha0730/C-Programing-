/* w.c.p for the following pattern
4 3 2 1 2 3 4
  4 3 2 3 4
    4 3 4
      4

*/

#include <stdio.h>
int main () {
    int i,j;
    
    for(i=1;i<=4;i++) {
        for(j=1;j<i;j++) {
            printf(" ");
        }
        for(j=4;j>=i;j--) {
            printf("%d", j);
        }
        for(j=i+1;j<=4;j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}