#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class base
{
public:
base()
{
cout<<"hello base class";
}
};
class derived:public base
{
public:
derived()
{
cout<<"\n hello derived class";
}
};
class derived1:public derived
{
public:
derived1()
{
cout<<"\n Hello derived1 class";
}
};


int main()
{
derived1 obj;
getch();
}
