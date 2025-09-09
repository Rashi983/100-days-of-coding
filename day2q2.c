#include <stdio.h>
int main()
{
    float r,area,circum;
    printf("Enter r");
    scanf("%f",&r);
    area=3.14*r*r;
    circum=2*3.14*r;
    printf("Area =%.2f",area);
    printf(",Circumference=%.2f",circum);
    return 0;
}