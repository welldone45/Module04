#include<iostream>
using namespace std;
class calculate
{

	public:
	void area(int area1, int area2){
		
		cout<<3.14*area1*area2<<endl;
		
	}
	
	void area(float area1, float area2){
		
		cout<<3.14*area1*area2<<endl;
	}
	
};
main(){
	
	calculate c1;
	c1.area(12,12);
	c1.area(12.5f,12.5f);

	
}