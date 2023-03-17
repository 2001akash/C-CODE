#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class base
{
public:
base()
{
cout<<"\n hello base class";
}
~base()
{
cout<<"\n base destructor called";
}
};
class base2
{
public:
base2()
{
cout<<"\n hi base2 class";
}
~base2()
{
cout<<"\n base2 destructor called";

}
};
class derived:public base2, public base
{
public:
derived()
{
cout<<"\n hello derived class";
}
~derived()
{
cout<<"\n derived class desrtuctor called";
}
};
int main()
{
{
derived obj;
}
getch();
}


