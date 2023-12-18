/*
Write a program to find the max number from given two numbers using friend function.
*/
#include<iostream>
using namespace std;
class Max{
	public:
		int a,b;
		void max(){
			cout<<"Enter 1st number: ";
			cin>>a;
			cout<<"Enter 2nd number: ";
			cin>>b;
			if(a>b){
				cout<<a<<" is bigger than "<<b;
			}
			else{
				cout<<b<<" is bigger than "<<a;
				}	
					}
		
		friend void func();
};
void func(){
	Max m;
	m.max();
}
main(){
	func();
}