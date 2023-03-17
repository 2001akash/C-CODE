#include<iostream>
using namespace std;
class base
{
	public:
		int a,b;
		void input()
		{
			cout<<"\nENTER THE VALUE FOR A and B";
			cin>>a>>b;
		}
		void output()
		{
			cout<<"\nThe Data Entered  for a is : "<<a;
			cout<<"\nThe Data Entered  for b is : "<<b;
		}
};
class derived:public base
{
	int c,d;
	public:
		void show()
		{
			//input();/// TO BE IMPLEMENTED ONLY IMPLEMENTED FOR PROTECTED MODE
			//output();
			cout<<"\nThe value of A in derived class is "<<a;
			cout<<"\nThe value of B in derived class is "<<b;
			cout<<"\nEnter the Value for C & D !!";
			cin>>c>>d;
			cout<<"\nThe Value of C is "<<c;
			cout<<"\nThe Value of D is "<<d;
		}
};
int main()
{
	derived d1;
	cout<<"The Size of the Program is : "<<sizeof(d1);
	d1.input();
	d1.output();
	d1.show();
}
