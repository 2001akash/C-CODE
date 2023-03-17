
// binary overloading of == using member function
#include<iostream>
#include<conio.h>
using namespace std;
class integer
{
int a,b;
public:
void input()
{
cout<<"\nEnter the value of a and b";
cin>>a>>b;
}
void operator==(integer &i1)//i2.operator==(i3)
{
if(a==(i1).a && b==(i1).b)//i1.a=10 i1.b=30
cout<<"\nBoth of them are equal";
else
cout<<"\nBoth of them are not equal";
}
};
int main()
{
integer i2,i3;
i2.input();// i2.a=10 i2.b=20
i3.input();// i3.a=10 i3.b=30
i2==i3;//or i2.operator==(i3)
getch();
}


