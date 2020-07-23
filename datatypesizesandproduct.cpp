//1. program to find size of int , float , char , double :
#include<iostream>
using namespace std;
int main()
{
	cout << "size of char:" <<sizeof(char) <<"byte" <<endl;
	cout << "size of int:" <<sizeof(int) <<"bytes" <<endl;
	cout << "size of float:" <<sizeof(float) <<"bytes" <<endl;
	cout << "size of double:" <<sizeof(double) <<"bytes" <<endl;
	
	return 0;
}

// 2. program to find product of two numbers entered by user :

#include<iostream>
using namespace std;
int main()
{
	double firstno , secondno , product;
	cout<<"enter two no.";
	cin>>firstno>>secondno;
	//product of two numbers will be displayed
	product= firstno * secondno;
	cout<<"product ="<<product;
	return 0;
}

