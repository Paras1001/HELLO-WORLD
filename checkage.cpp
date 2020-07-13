#include<iostream>
using namespace std;
int main()
{
	//program to check user eligible to vote or not
	int age;
	cout<<"enter your age :";
	cin>>age;
	if (age>=18)
	{
		cout<<"you are eligible for vote";
		
	}
	else if(age<17)
	{
		cout<<"your are not eligible for vote";
		cout<<"\nyou have to wait for : "<<18-age<<" years to vote";
	}

	return 0;

}
