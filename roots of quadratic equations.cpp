#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c,d;
	double d1,d2,d3,d4,x1,x2;
	
	cout<<"enter coffecient of x^2 , x , constant : ";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	cout<<"discriminant = "<<d<<endl;
	if(d>0)
	{
		cout<<"real roots"<<endl;
		d4 = sqrt(d);
		x1 = (-b+d4)/(2*a);
	        x2 = (-b-d4)/(2*a);
	        cout<<"\nThe roots of the equation is : "<<x1<<" , "<<x2<<endl;
	}
	if(d==0)
	{
		cout<<"equal roots"<<endl; 
		d4 = sqrt(d);
		x1 = (-b+d2)/(2*a);
	        x2 = (-b-d2)/(2*a);
	        cout<<"\nThe roots of the equation is : "<<x1<<" , "<<x2<<endl; 
	}
	if(d<0)
	{
		cout<<"imaginary roots"<<endl;
		d3=-d;
		d2=sqrt(d3);
		
		cout<<"\n x1 = (-"<<b<<"+"<<d2<<"i)"<<"/"<<2*a;
    	        cout<<"\n x2 = (-"<<b<<"-"<<d2<<"i)"<<"/"<<2*a;       
	}
	return 0;
}

