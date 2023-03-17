#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
class student
{
public:
string name;
int rn;
int m1,m2,m3;
public:

void input()
{
cout<<"\n Enter the name";
getline(cin,name);
cout<<"\n Enter the roll number";
cin>>rn;
cout<<"\n Enter marks of 3 subjects";
cin>>m1>>m2>>m3;
}
};
class percentage:public student
{
int total;
float per;
public:
void calculate()
{
total=m1+m2+m3;
cout<<"\n total marks obtained by student"<<total;
per=total/3.0;
cout<<"\n Percentage ="<<per;
}
};

int main()
{
percentage p;
p.input();
p.calculate();
getch();
}


