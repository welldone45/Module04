/*
Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading
*/

#include<iostream>
using namespace std;
class Calculator{
	public:
		void calc(int a, int b){
			cout<<"Addition of given number is : "<<a+b<<endl;
		}
		void calc(int a, int b, int c){
			cout<<"Substraction of given number is : "<<a-b<<endl;
		}
		void calc(int a, int b, int c, int d){
			cout<<"Multiplication of given number is : "<<a*b<<endl;
		}
		void calc(float a, float b){
			cout<<"Division of given number is : "<<a/b<<endl;
		}
};
main(){
	Calculator c;
	c.calc(10,2);      // Addition
	c.calc(10,2,0);    // Substraction
	c.calc(10,2,1,1);      // Multiplication
	c.calc(10.f,2.f);  // Division
}