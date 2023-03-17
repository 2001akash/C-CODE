#include<iostream>
#include<conio.h>
using namespace std;
class area
{
	public:

	int a;
	

		void enter()
		{
			cout<<"whose area you want to calculate :"; 
			cout<<"\n enter 1 for square";
			cout<<"\n enter 2 for rectangle";
			cout<<"\n enter 3 for parallelogram\n";
			cin>>a; 
		}
		void square(int s=10)
		{
			cout<<"area of square of side 10 unit is "<<s*s;
		}
		void rectangle(int l=10, int b=10)
		{
			int ar=l*b;
			cout<<"area of rectangle with length and breadth 10 unit is "<<ar;
		}
		void para(int base=10, int h=10)
		{
			float ar=base*h;
			cout<<"area of parallelogram with height and base 10 unit is "<<ar;
			
		}
		void call()
		
		{
			int m=a;
			if(m==1)
			square();
			else if(m==2)
			rectangle();
			else
			para();
		}
};
int main()

{
	
	area a1;
	a1.enter();
	a1.call();
	getch();
	
}
