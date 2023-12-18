#include<iostream>
using namespace std;
class calculator
{
	public:
		int a;
		int b;
		
		
	void addition()
	{
		cout<<"enter number a :";
		cin>>a;
		cout<<"enter number b : ";
		cin>>b;
		
	}	
	
	void display(){
		
		cout<<" a + b = "<<a+b;
	}
};
main()
{
	calculator c1;
	c1.addition();
	c1.display();
}