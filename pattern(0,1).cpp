#include<stdio.h>
int main()
{
	int n,m;
	for(n=0;n<6;n++)
	{
		for(m=0;m<=n;m++)
		{
			printf(" 0 1 ");   //will print 0 1 in a pattern
		}
		printf("\n");     //for next line
	}
	return 0;
}
