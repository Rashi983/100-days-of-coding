#include <stdio.h>
int main()
{
  int num1,num2,sum,diff,product,quotient;
  printf("Enter num1 and num2");
  scanf("%d %d",&num1,&num2);
  sum=num1+num2;
  diff=num1-num2;
  product=num1*num2;
  quotient=num1/num2;
  printf("Sum=%d",sum);
  printf("Diff=%d",diff);
  printf("Product=%d",product);
  printf("Quotient=%d",quotient);
  return 0;
}  