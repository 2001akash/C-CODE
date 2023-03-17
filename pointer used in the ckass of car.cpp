// to use pointer data member inside the class
#include<iostream>
#include<conio.h>
using namespace std;
class car
{
char name[30];
float cost;
float *p;

public:
void display()
{
cout<<"\n Enter the name of car";
cin>>name;
cout<<"\n Name of car is"<<name;
p=&cost;
cout<<"\n Enter the cost of the car";
cin>>cost;
cout<<"\n Cost of the car is"<<*p;
}
};

int main()
{
car c1;
c1.display();
getch();
}


