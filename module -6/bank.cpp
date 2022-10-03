#include<iostream>
using namespace std;

class bank
{
public:
	int acno;
	char name[100],acctype[100];
	float balance;
//	 bal=balance;
	void deposite();
	void withdraw();
	void display();
	
};
void bank::deposite()	//depositing an amount
{
	int damt;
	cout<<"\n Enter Deposite Amount =";
	cin>>damt;
	balance+=damt;
}
void bank::withdraw() //withdrawing an amount
{
	int wamt1;
	cout<<"\n Enter Withdrawal Amount =";
	cin>>wamt1;
	if(wamt1>balance)
		cout<<"\n can not withdrawal amonut";
	balance-=wamt1;
	
}
void bank ::display() //displaying the details
{
	cout<<"\n...............";
	cout<<"\n Account No. :"<<acno;
	cout<<"\n Name :"<<name;
	cout<<"\n Account type :"<<acctype;
	cout<<"\n Balance :"<<balance;
}
int main()
{
	int acno;
	char name [100],acctype[100];
	float balance;
	bank b1/*(acc_no, name , acc_type, balance)*/ ;
	cout<<"\n Enter Details: \n";
	cout<<"......................";
	cout<<"\nAccount No.";
	cin>>b1.acno;
	cout<<"\n Name:";
	cin>>b1.name;
	cout<<"\nAccount type :";
	cin>>b1.acctype;
	cout<<"\n Balance :";
	cin>>b1.balance ;
	
//	bank b1(acc_no, name , acc_type, balance); //object is created
	b1.deposite();//
	b1.withdraw();//calling memberfunction
	b1.display();//
	return 0;
}
