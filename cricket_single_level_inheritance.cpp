/*
Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/

#include<iostream>
using namespace std;
class Cricketer{
	public:
		float run,balls,matches,bestScore;
		string name;
		void inputData(){
			cout<<"Enter batsman name: ";
			cin>>name;
			cout<<"Enter total runs you score: ";
			cin>>run;
			cout<<"Enter total matches you played: ";
			cin>>matches;
			cout<<"Enter total balls you played: ";
			cin>>balls;
			cout<<"Enter your best score: ";
			cin>>bestScore;
		}
};
class Batsman : public Cricketer{
	public:
		float avg,sr;
		void displayData(){
			avg = run/matches;
			sr = run/balls*100;
			cout<<"\nBatsman name : "<<name;
			cout<<"\nTotal runs : "<<run;
			cout<<"\nTotal balls : "<<balls;
			cout<<"\nTotal matches : "<<matches;
			cout<<"\nAverage runs : "<<avg;
			cout<<"\nStrike rate : "<<sr;
			cout<<"\nHighest score in a single match is : "<<bestScore;
		}
};
main(){
	Batsman b;
	b.inputData();
	b.displayData();
}