#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class base
{
public:
void show()
{
cout<<"\n hello base class";
}
};
class base2
{
public:
void show()
{
cout<<"\n hello base class 2";
}
};
class derived:public base,public base2
{
public:
void show()
{
cout<<"\n hello derived class";
}
};
int main()
{
derived obj;
obj.show();
obj.base::show();
obj.base2::show();
getch();
}


