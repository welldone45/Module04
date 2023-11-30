#include<iostream>
using namespace std;
class MathOperation
{
	
	public:
		void multiplication(int a,int b){
			
			cout<<a*b<<endl;
		}

		void multiplication(float a,float b){
			
			cout<<a*b<<endl;
		}

		
};
main(){

	MathOperation m1;
	m1.multiplication(5,5);
	m1.multiplication(12.5f,10.2f);
}