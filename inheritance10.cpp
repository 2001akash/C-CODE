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
int main()
{
derived obj;
getch();
}



