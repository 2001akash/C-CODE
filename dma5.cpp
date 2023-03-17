#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class base
{
public:
void virtual show()
{
cout<<"\n hello base class";
}
};
class derived: public base

{
public:
void show()
{
cout<<"\n hello derived class";
}
};
int main()
{
base *ptr;
base obj;
ptr=&obj;
ptr->show();
derived d1;
ptr=&d1;
ptr->show();

getch();
}


