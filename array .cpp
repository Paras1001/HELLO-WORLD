#include<iostream>
using namespace std;
int main()
{
	int arr[4];
	cout<<"enter numbers:";
	for(int i=0 ; i<5 ; i++)
	{
		
		cin>>arr[i];
		
	}
	cout<<endl;
	cout<<"you entered :";
	
	for(int i=0 ; i<5 ; i++)
	{
		cout<<arr[i]<<"\n";
	}
	return 0;

}
