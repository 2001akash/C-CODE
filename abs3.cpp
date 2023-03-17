#include<iostream>
#include<conio.h>
template<class T>
class demo
{
public:
T a;
T b;
void input()
{
 cout<<"\n enter values";
cin>>a>>b;
}
void display()
{
cout<<"\n result of addition is"<<a+b;
}
};

int main()
{
demo <float>obj;
obj.input();
obj.display();
demo<int>obj1;
obj1.input();
obj1.display();
getch();
}


