/*
Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the marks
obtained in two subjects and class result contains the total marks obtained in
the test. The class result can inherit the details of the marks obtained in the
test and roll number of students. (Multilevel Inheritance) 
*/

#include<iostream>
using namespace std;
class Students{
	public:
		int roll;
		void rollnum(){
			cout<<"Enter your roll number: ";
			cin>>roll;
		}
};

class Test : public Students{
	public:
		int m1,m2;
		void marks(){
			cout<<"Enter marks of 1st subject: ";
			cin>>m1;
			cout<<"Enter marks of 2nd subject: ";
			cin>>m2;
		}
};

class Total : public Test{
	public:
		int mtotal;
		void total(){
			cout<<"Roll number: "<<roll<<endl;
			cout<<"Total marks: "<<m1+m2;
		}
};
main(){
	Total t;
	t.rollnum();
	t.marks();
	t.total();
}

