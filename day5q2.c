#include <stdio.h>
int main(){
	int s,h,m;
	printf("Enter time in seconds");
	scanf("%d",&s);
	h = s / 3600;          // 1 hour = 3600 seconds
    m = (s % 3600) / 60; // remaining seconds converted to minutes
    s = s % 60;       
	printf("%d:%d:%d",h,m,s);
	return 0;
}
