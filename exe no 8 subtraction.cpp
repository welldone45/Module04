#include<iostream>
using namespace std;
class MathOperation
{
	
	public:
		void subtraction(int a,int b){
			
			cout<<a-b<<endl;
		}

		void subtraction(float a,float b){
			
			cout<<a-b<<endl;
		}

		
};
main(){

	MathOperation m1;
	m1.subtraction(10,05);
	m1.subtraction(34.23f, 12.23f);

}