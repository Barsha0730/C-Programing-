#include <stdio.h>
int main () {
    float radius,circm,area;
    const float pi= 3.14;
    printf("Enter the radius of the circle : ");
    scanf("%f", &radius);
    circm=2*pi*radius;
    area=pi*radius*radius;
    printf("The circumference of the circle is : %.2f\n", circm);
    printf("The area of the circle : %.2f\n");
    return 0;
}