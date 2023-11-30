#include<iostream>
using namespace std;
class MathOperation
{
	
	public:
		void addition(int a,int b){
			
			cout<<a+b<<endl;
		}

		void addition(float a,float b){
			
			cout<<a+b<<endl;
		}

		
};
main(){

	MathOperation m1;
	m1.addition(10,20);
	m1.addition(34.12f,10.05f);

}