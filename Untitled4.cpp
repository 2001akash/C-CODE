#include<iostream>
#include<conio.h>
static int count = 0,prod=1,s=0,sum=0;
using namespace std;
class armstrong
{
	int a, l,  q ; 
	public:
		void enter()
		{
			cout<<"\n enter the number :";
			cin>>a;
			
		}
		void arm()
		{
			int m=a;
			while(m!=0)
			{
				l=m%10;
				s+=l*l*l;
				m=m/10;
			}
			if(s==a)
			cout<<"\nnumber is armstrong";
			else 
			cout<<"\nnumber is not armstrong";
		}
		void prime()
		{
			int m=a;
			while(m!=0)
			{
				int x=m%10;
				if(x==4 || x==6 || x==8 || x==9)
				{
					prod=prod*x;
					
				}
				m=m/10;
			}
			cout<<"\nproduct of non prime :"<<prod;
		}
		void cube()
		{
			int m=a;
			while(m!=0)
			{
				
				int x=m%10;
				sum+=x*x*x;
				m=m/10;
			}
			cout<<"\nsum of cube of digits is "<<sum;
		}
		
};
int main()

{
	
	armstrong a1;
	a1.enter();
	a1.prime();
	a1.arm();
	a1.cube();
	getch();
}
