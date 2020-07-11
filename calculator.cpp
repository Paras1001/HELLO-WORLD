#include<iostream>
using namespace std;

main()
{
	int num1 , num2 , res , op ;
	cout<<"calculator";
	cout<<"\n1. addition";
	cout<<"\n2. subtraction";
	cout<<"\n3. multiplication";
	cout<<"\n4. division";
	cout<<"\n\tEnter first no. ";
	
	cin>>num1;
	cout<<"\n\tEnter second no.";
	cin>>num2;
	cin>>op;
	switch(op)
	{
		case 1:
			//addition
			res = num1+num2;
			cout<<res;
			break;
		case 2:
			//subraction
			res = num1-num2;
			cout<<res;
			break;
		case 3:
			//multiplication
			res = num1*num2;
			cout<<res;
			break;
		case 4:
			//division
			res = num1/num2;
			cout<<res;
			break;
		default:
			cout<<"invalid input";
			break;
		
		
			
		   	
			        
    }
	return 0;
	
	
}
