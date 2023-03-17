#include<conio.h>
#include<iostream>
using namespace std;
class base // Base class
{
public:
int a;
public:
void input()
{
cout<<"\n enter value of a";
cin>>a;
}
void display()
{
cout<<"\n value of a in base class"<<a;
}
};
class derived:private base // Inheritance done using double colon and then mode of Inhertance
{
int b,c;
public:
void show()
{
input();
display();

cout<<"\n Value of a in derived class"<<a;
cout<<"\n enter the value of b and c";
cin>>b>>c;
cout<<"\n values are"<<b<<endl<<c;
}

};
int main()
{
derived d1;
cout<<sizeof(d1);//12
//d1.a=100;
//cout<<endl<<d1.a;
//d1.input();
//d1.display();
d1.show();
getch();
}
