#include <stdio.h>
int main() {
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    int sum=0;
    int i=1;
    while(i<=n) {
        sum = sum+i;
        i++;
    }
    printf("Sum is : %d\n", sum);
    return 0;
}