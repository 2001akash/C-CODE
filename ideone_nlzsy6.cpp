#include<iostream>
using namespace std;
class base
{
	public:
		int b;
		void virtual show()
		{
			cout<<"BASE CLASS";
			cout<<"\nThe Value of b is "<<b;
		}
};
class derived:public base
{
	public:
		int d;
		void show()
		{
			cout<<"\nDERIVED CLASS ";
			cout<<"\nThe Value of b is"<<b;
			cout<<"\nThe Value of d is "<<d;
		}
};
int main()
{
	base *baseptr;
	base b1;
	baseptr = &b1;
	baseptr->b=100;
	baseptr->show();
	derived d1;
	baseptr=&d1;
	baseptr->b=200;
	d1.d=300;
	baseptr->show();
}