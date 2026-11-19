/*w.c.p to find the net salary, HRA=10%of salary, DA=5% of salary,
 if sal>=20,000 - 10% tax, else 7% tax */

#include<stdio.h>
int main () {
    int b_sal, n_sal, hra, da, tax;
    printf("Enter basic salary : ");
    scanf("%f", &b_sal);

    hra = (b_sal*10.0/100.0);
    da = (b_sal*5.0/100.0);

    if (b_sal>=20000) {
        tax = (b_sal*10.0/100.0);
    }
    else {
        tax = (b_sal*7.0/100.0);
    }
    n_sal = (b_sal+hra+da-tax);

    printf("HRA is : %.2f\n", hra);
    printf("DA is : %.2f\n", da);
    printf("Net salary is : %.2f\n", n_sal);

    return 0;
}
