#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int num1 , num2 , num3 , num4 , op ,  res1 , res2 , res;
	cout<<"1) ADDITION \n2) SUBTRACTION \n3) MULTIPY \n4) DIVISION \n5) SQUARE \n6) SQUARE ROOT ";               //ADDITION
	cout<<"\n\tENTER FIRST NUMBER : ";                                                                           //SUBTRACTION
	cin>>num1;                                                                                                   //MULTIPLY
	cout<<"\nSELECT OPERATOR : ";                                                                                //DIVIDE
	cin>>op;                                                                                                     //SQUARING
	switch(op)                                                                                                   //SQUARE ROOT
	{
		case 5:
			res=num1*num1;
			cout<<"SQUARE :"<<res;
			return 0;
		case 6:
		    res=pow(num1 , 0.5);
		    cout<<"SQUARE ROOT :"<<res;
		    return 0;
	}
	cout<<"\n\tENTER SECOND NUMBER :";
	cin>>num2;
	switch(op)
	{
		case 1:
			res1=num1+num2;
			cout<<res1;
			break;
		case 2:
		    res1=num1-num2;
			cout<<res1;
			break;
		case 3:
		    res1=num1*num2;
			cout<<res1;
			break;
		case 4:
		    res1=num1/num2;
			cout<<res1;
			break;			
	}
	cout<<"\nSELECT OPERATOR : ";
	cin>>op;
	cout<<"\n\tENTER THIRD NUMBER :";
	cin>>num3;
	switch(op)
	{
	
		case 1:
			res2=res1+num3;
			cout<<res2;
			break;
		case 2:
		    res2=res1-num3;
			cout<<res2;
			break;
		case 3:
		    res2=res1*num3;
			cout<<res2;
			break;
		case 4:
		    res2=res1/num3;
			cout<<res2;
			break;
	}
	cout<<"\nSELECT OPERATOR : ";
	cin>>op;
	cout<<"\n\tENTER FOURTH NUMBER :";
	cin>>num4;
	switch(op)
	{
	
		case 1:
			res=res2+num4;
			cout<<"FINAL RESULT : "<<res;
			break;
		case 2:
		    res=res2-num4;
			cout<<"FINAL RESULT : "<<res;
			break;
		case 3:
		    res=res2*num4;
			cout<<"FINAL RESULT : "<<res;
			break;
		case 4:
		    res=res2/num4;
			cout<<"FINAL RESULT : "<<res;
			break;
	}
	return 0;
		
}
