#include<iostream>
using namespace std;
class calculate
{

	public:
	void area(int area, int breadth){
		
		cout<<area*breadth<<endl;
		
	}
	
	void area(float area, float breadth){
		
		cout<<area*breadth<<endl;
	}
	
};
main(){
	
	calculate c1;
	c1.area(12,12);
	c1.area(12.5f,12.5f);

	
}