#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{ public:
int len,brth;
public:
rectangle()//default cons
{
cout<<"\n Basic constructor called";
}
rectangle(int l, int b)//parameterized cons
{
len=l;
brth=b;
}
~rectangle()//destructor
{
cout<<"\n object destroyed";
}
void area()
{
cout<<"\n Area of rectangle"<<len*brth;
}

};
int main()
{
{
rectangle r1;
}
{
rectangle r2(5,10);
r2.area();
}

//r2.len=50;
getch();
}



