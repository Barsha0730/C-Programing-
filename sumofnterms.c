// w.c.p fot 1+11+111+1111.....n terms
#include <stdio.h>
int main () {
    int n,i=1,term=0,sum=0;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    while (i<=n) {
        term=term*10+1;
        sum+=term;
        i++;
    }
    printf("The sum of the series is :%d\n", sum);
    return 0;
}