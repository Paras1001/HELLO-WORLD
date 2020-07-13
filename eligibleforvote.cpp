#include<iostream>
using namespace std;
main()
{
	cout<<"program to check age of user eligible for voting or not";
	int age;
	cout<<"enter your age :";
	cin>>age;
	if(age>=18)
	{
		cout<<"u are eligible for vote";
		
	}
	if(age<18)
	{
		cout<<"you are not elegible for vote";
		
	}
	return 0;
}
