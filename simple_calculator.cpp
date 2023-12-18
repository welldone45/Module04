#include<iostream>
using namespace std;
class Calc{
	public:
		int a,b;
		void calc(){
			cout<<"Enter 1st number: ";
			cin>>a;
			cout<<"Enter 2nd number: ";
			cin>>b;
			cout<<"Addition of given numbers is: "<<a+b<<endl;
			cout<<"Substraction of given numbers is: "<<a-b<<endl;
			cout<<"Multiplication of given numbers is: "<<a*b<<endl;
			cout<<"Division of given numbers is: "<<a/b<<endl;
		}
};
main(){
	Calc c;
	c.calc();
}