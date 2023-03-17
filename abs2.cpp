#include<iostream>
#include<conio.h>
using namespace std;
class fruit // Abstract class
{
public:
virtual void taste()=0;
};
class mango:public fruit
{
public:
void taste()
{
cout<<"\n mango is sweet in taste";
}
};
class grapes:public fruit
{
public:
void taste()
{
cout<<"\n Grapes are sour in taste";
}
};
int main()
{
fruit *p;
//fruit ob;
mango m1;
p=&m1;
p->taste();
grapes g1;
p=&g1;
p->taste();
getch();
}



