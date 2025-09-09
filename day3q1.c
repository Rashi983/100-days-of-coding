#include <stdio.h>
int main()
{
    int c,f;
    printf("Enter temperature in celsius");
    scanf("%d",&c);
    f=(c*1.8)+32;
    printf("Farenheit=%d",f);
    return 0;
}