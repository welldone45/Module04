/*
Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance) 
*/

#include<iostream>
using namespace std;
class Person{
	public:
		string name;
		int age;
	void namefunc(){
		cout<<"Enter your name: ";
		cin>>name;
	}
	void agefunc(){
		cout<<"Enter your age: ";
		cin>>age;
	}
};

class Student{
	public:
		int per;
		void percentage(){
			cout<<"Enter your percentage: ";
			cin>>per;
		}
};

class Teacher{
	public:
		int salary;
		void salaryfunc(){
			cout<<"Enter your salary: ";
			cin>>salary;
		}
};

class Data : public Person, public Student, public Teacher{
	public:
		void data(){
			cout<<"\nYour name is : "<<name;
			cout<<"\nYour age is : "<<age;
			cout<<"\nYour percentage is : "<<per;
			cout<<"\nYour salary is : "<<salary;
			
		}
};

main(){
	Data d;
	d.namefunc();
	d.agefunc();
	d.percentage();
	d.salaryfunc();
	d.data();
}