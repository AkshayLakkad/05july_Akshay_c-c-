#include<iostream>
using namespace std;
class grand

{
	public:
		int house;
		int gdata()
		
	{
//		int house;
		cout<<"Enter no of house:";
		cin>>house;
		return 0;
	}
	
};
class parent: public grand
{
	public:
		int bal;
		int pdata()
		{
//			int bal;
			cout<<"Enter bank balance:";
			cin>>bal;
			return 0;
		}
};
class child : public parent
{
	public:
		int showdata()
		{
			cout<<"\n Enter number of house:"<<house;
			cout<<"\n Your total bank balance:"<<bal;
			return 0;
		}
};
int main()
{
	child c1;
	c1.gdata();
	c1.pdata();
	c1.showdata();
	return 0;
}
