#include<iostream>
#include<conio.h>
using namespace std;
class car
{
float *cost;
char *name;
int *c;

public:
void input()
{
cost=new float;
cout<<"\n enter the cost";
cin>>*cost;
name=new char[10];
cout<<"\n enter the name";
cin>>name;
c= new int;
cout<<"\n enter the capacity of car";
cin>>*c;
}
void output()
{
cout<<"\n Name is"<<name;
cout<<"\n cost of car is"<<*cost;
cout<<"\n capacity of car is"<<*c;
}
};
int main()
{
car *ptr=new car;
ptr->input();
ptr->output();
delete ptr;

getch();
}


