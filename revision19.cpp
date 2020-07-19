#include<iostream>
#include<iomanip>
using namespace std;
class time{
	protected:
		int seconds;
		int hh , mm , ss;
	public:
	  void convert();
	  void time1();	
};
void time::convert()
{
	seconds=hh*3600 + mm*60 + ss;
	cout<<"\nSeconds : "<<seconds<<endl;
}
void time::time1()
{
	cout<<"Hours?    \t";
	cin>>hh;
	cout<<"Minutes?  \t";
	cin>>mm;
	cout<<"Seconds?  \t";
	cin>>ss;
	cout<<"The Time is : "<<setw(2)<<setfill('0')<<hh<<":"<<setw(2)<<setfill('0')<<mm<<":"<<setw(2)<<setfill('0')<<ss;
	
}
main()
{
	time T;
	T.time1();
	T.convert();
	return 0;
}
