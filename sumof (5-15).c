#include <stdio.h>
int main(){
    int n=5;
    int sum=0;
    while(n<=15) {
        sum=sum+n;
        n++;
    }
    printf("sum is : %d\n", sum);
    return 0;
}