/* Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>
int main(){
	int i,n,j,f;
	printf("Enter n");
	scanf("%d",&n);
	 
	 for(i=2;i<=n;i++)
	 {
	 	for(j=1;j<=i;j++)
	 	{
	 	if(i%j==0)
	 	f++;
	    }
		if(f==2)
		printf("%d ",i); 
	 	f=0;
	 }
}