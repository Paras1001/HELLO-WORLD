#include<stdio.h>

main()
{
	int op,price;
	char item[9];
	printf("Enter your choice (1-5) : ");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			price=129;
			printf("\nFood item - Burger");
        	printf("\nPrice - %d",price);
			break;
      	case 2:
			printf("\nFood item - Fries");
			price = 99;
			printf("\nPrice - %d",price);
			break;
		case 3:
			printf("\nFood item - Pasta");
			price = 179;
			printf("\nPrice - %d",price);
			break;
		case 4:
			printf("\nFood item - Pizza");
			price = 239;
			printf("\nPrice - %d",price);
			break;
		case 5:
			printf("\nFood item - Sandwich");
			price = 149;
			printf("\nPrice - %d",price);
			break;			
	}
}
