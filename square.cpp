#include<iostream>
using namespace std;
class Square{
	public:
		inline void square(int a){
			cout<<"Square of given number is "<<a*a;
		}
};
main(){
	Square s;
	s.square(5);
}