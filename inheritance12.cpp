#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class A //base1
{
public:
A()
{
cout<<"\n Class A";
}
};
class B //base2
{
public:
B()
{
cout<<"\n Class B";
}
};
class C: public B, public A
{
public:
C()
{
cout<<"\n class C";
}
};
int main()
{

C obj;
getch();
}


