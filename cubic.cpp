#include<iostream>
using namespace std;
class Cube{
	public:
		inline void cube(int a){
			cout<<"Cube of given number is "<<a*a*a;
		}
};
main(){
	Cube c;
	c.cube(5);
}