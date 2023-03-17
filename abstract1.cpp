#include<iostream>
#include<conio.h>
using namespace std;
class vehicle
{
public:
virtual void speci()=0;
};
class two_wheeler:public vehicle
{
string name;
string color;
float cost;

public:
void speci()
{
cout<<"\n enter the name";
cin>>name;
cout<<"\n name is"<<name;
cout<<"\n enter the cost";
cin>>cost;
cout<<"\n cost is"<<cost;
cout<<"\n enter the color";
cin>>color;
cout<<"\n color is"<<color;
}
};
class four_wheelr:public vehicle
{
int capacity;
int milage;
public:
void speci()
{
cout<<"\n enter capacity ";
cin>>capacity;
cout<<"\n capacity is"<<capacity;
cout<<"\n enter milage";
cin>>milage;
cout<<"\n milage is"<<milage;
}
};
int main()
{
vehicle *v;
two_wheeler t1;
four_wheelr w1;
v=&t1;
v->speci();
v=&w1;
v->speci();
getch();
}


