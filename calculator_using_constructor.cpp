#include<iostream>
using namespace std;
class calc{
	float num1,num2;
	public:
		calc(){
			cout<<"Enter 1st num\n";
			cin>>num1;
			cout<<"Enter 2nd num\n";
			cin>>num2;
			cout<<"Sum of given num is : "<<num1+num2;
			cout<<"\nSubstraction of given num is : "<<num1-num2;
			cout<<"\nMultiplication of given num is : "<<num1*num2;
			cout<<"\nDivision of given num is : "<<num1/num2;
			
		}
};
main(){
	calc c;
}