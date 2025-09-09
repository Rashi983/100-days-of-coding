
/* Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,r1,r2,c1;
	printf("Enter coeff of quadratic eq");
	scanf("%d %d %d",&a,&b,&c);
	c1=(b*b) - (4*a*c);
	if(c1>0)
	{
		r1= (-b + sqrt(c1))/(2*a);
       	r2= (-b - sqrt(c1))/(2*a);
		printf("Roots are real and different : %d,%d", r1,r2);
	}
		else if(c1==0)
		{
		
		r1 = -b / (2*a);
        printf("Roots are real and same: %d",r1);
    }
    
    else
    printf("Roots are complex");
	return 0;
}
