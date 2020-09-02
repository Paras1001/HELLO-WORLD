#include<stdio.h>
int main()
{
	int a=15,b=13;
	printf("A=%d\tB=%d",a,b);
	printf("\n\tAfter swapping........!!!!!\n");
	a=a+b;
	b=a-b;
	a=a-b;
	printf("A=%d\tB= %d",a,b);
	
}
