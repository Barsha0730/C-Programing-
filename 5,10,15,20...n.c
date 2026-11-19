#include <stdio.h>
int main () {
    int n,sum=0,i=1,term;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (i<=n) {
        term=5*i;
        sum+=term;
        i++;
    }
    printf("The sum of the series is : %d\n", sum);
    return 0;
}