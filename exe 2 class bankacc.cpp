#include<iostream>
#include<string>
using namespace std;
class BankAccount{
	
	private:
				string depositorName;
				long accountNumber;
				string accountType;
				double balance;
			public:
				
				void setValues(string name,long accnumber,string acctype,double initialBalance){
					
					depositorName=name;
					accountNumber=accnumber;
					accountType=acctype;
					balance=initialBalance;
				}
				void diposit(double amount){
					if(amount>0){
						balance +=amount;
						cout<<"Deposit seccessful.New Balance : "<<balance<<endl<<endl;
					}
					else{
						cout<<"Invalid deposti amount."<<endl;
					}
					
				}
				void withdraw(double amount){
					if(amount>0 && amount <=balance){
						balance -=amount;
						cout<<"Withdrawal successful.New balance :" <<balance<<endl<<endl;
					}
					else{
						cout<<"Invalid withdrawal amount or insuficient balance."<<endl;
					}
					
				}
				void display(){
				cout<<"Depositor Name : "<<depositorName<<endl;
				cout<<"Account Number : "<<accountNumber<<endl;
				cout<<"Account Type : "<<accountType<<endl;
				cout<<"Balance : "<<balance<<endl;	
				}
	
	
};
int main(){
	
	BankAccount myaccount;
	myaccount.setValues("Salim",1236547821,"Saving",1000.00);
	cout<<"Initial Account Information:"<<endl<<endl;
	myaccount.display();
	myaccount.diposit(1000.0);
	myaccount.withdraw(500.0);
	cout<<"Updated Account Information : "<<endl<<endl;
	myaccount.display();
	return 0;	
}
	
			