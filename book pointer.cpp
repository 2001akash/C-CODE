#include <iostream>
using namespace std;
class book
{
	public:
	int pages, cost;
	string name;
	public:
	void input()
	{
		cout<<"Enter the details of book: ";
		cin>>name>>pages>>cost;
	}
	public:
	void output()
	{
		if(pages>100)
		cout<<"\nThe book having pages greater than 100 is "<<name;
	}
};
 
 
int main() {
 
	book b1 ,b2;
	book *p1,*p2;
	p1=&b1;
	p2=&b2;
	(*p1).input();
	(*p2).input();
	(*p1).output();
	(*p2).output();
	return 0;
}

