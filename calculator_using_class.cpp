#include<iostream>
using namespace std;
int choose;
class calculator
{
	public:
		int a,b;
		
		void add()
		{
			cout<<"enter two num:\n";
			cin>>a;
			cin>>b;
			cout<<a+b;	
		}	
			
		void sub()
		{
			cout<<"\nenter two num:\n";
			cin>>a;
			cin>>b;
			cout<<a-b;	
		}	
			
		void multi()
		{
			cout<<"\nenter two num:\n";
			cin>>a;
			cin>>b;
			cout<<a*b;	
		}	
			
		void div()
		{
			cout<<"\nenter two num:\n";
			cin>>a;
			cin>>b;
			cout<<a/b;	
		}	
		
			
};
main(){
 calculator ar;
        cout<<"enter a choose\n";
        cin>>choose;
	if(choose==1){
		ar.add();	
	}
	else if(choose==2){
    ar.sub();		
	}
	else if(choose==3){
    ar.multi();		
	}
	else if(choose==4){
    ar.div();		
	}
}