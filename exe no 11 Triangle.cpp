#include<iostream>
using namespace std;
class calculate
{

	public:
	void area(int base, int height)
	{
		
		cout<<1/2*base*height<<endl;
		
	}
	
	void area(float base, float height){
		
		cout<<1/2*base*height<<endl;
	}
	
};
main(){
	
	calculate c1;
	c1.area(12,20);
	c1.area(10.05f,15.02f);
	
}