#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
public:
Base()
{
cout<<"\n base class cons called";
}

virtual ~ Base(){cout<<"\nBase Destructor Called";}
};
class Derived:public Base
{
public:
Derived()
{
cout<<"\n derived class contructor called";
}
~Derived(){cout<<"\nDerived Destructor Called";}
};

int main()
{
Base *bptr=new Derived;
delete bptr;
getch();
}


