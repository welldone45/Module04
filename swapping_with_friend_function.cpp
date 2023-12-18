/*
Write a program to swap the two numbers using friend function without using third variable.
*/

#include<iostream>
using namespace std;
class Swap{
	private:
		int a,b;
		void swap(){
			cout<<"Enter 1st number: ";
			cin>>a;
			cout<<"Enter 1st number: ";
			cin>>b;
			cout<<"a before swap is : "<<a<<endl;
			cout<<"b before swap is : "<<b<<endl;
			a=a+b;
			b=a-b;
			a=a-b;
		}
		friend void func();
};
void func(){
	Swap s;
	s.swap();
	cout<<"a after swap is  : "<<s.a<<endl;
	cout<<"b after swap is  : "<<s.b<<endl;
}
main(){
	func();
}