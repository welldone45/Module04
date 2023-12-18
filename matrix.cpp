#include<iostream>
using namespace std;
class matrix{
	public:
		int l,a1[100],a2[100],i;
		void input()
		{
			cout<<"Enter length of array ";
			cin>>l;
			for(i=0;i<l;i++){
				cout<<"Enter value of 1st array ";
				cin>>a1[i];
			}
			for(i=0;i<l;i++){
				cout<<"Enter value of 2nd array ";
				cin>>a2[i];
			}
			for(i=0;i<l;i++)
			{
				cout<<"\nSum of second element of both array: "<<a1[i]+a2[i];
			} 
			
		}
};
main()
{
	matrix m;
	m.input();
}