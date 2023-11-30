#include<iostream>
using namespace std;
class Swap
{
	
	public:
		int x;
		
	protected :
		int y;
		
	friend void fun();
	

};

void fun()
{
	
	Swap s1;
	s1.x=4;
	s1.y=6;
	
	
	
	cout<<"\nThe value of x before swap is : "<<s1.x;
	cout<<"\nThe value of y before swap is : "<<s1.y;
	
	s1.x=s1.x+s1.y;
	s1.y=s1.x-s1.y;
	s1.x=s1.x-s1.y;
	
	cout<<"\nThe value of x after swap is : "<<s1.x;
	cout<<"\nThe value of y after swap is : "<<s1.y;
	
	
}

main()
{
	fun();
}

