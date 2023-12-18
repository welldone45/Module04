/*
Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
*/

#include<iostream>
using namespace std;
class Area{
	public:
		void area(int l, int b){
			cout<<"Area of Rectangle : "<<l*b<<endl;
		}
		void area(float b, float h){
			cout<<"Area of Triangle : "<<b*h/2<<endl;
		}
		void area(float r){
			float p=3.14;
			cout<<"Area of Circle : "<<r*r*p<<endl;
		}
};
main(){
	Area a;
	a.area(5,5);
	a.area(6,8);
	a.area(9);
}