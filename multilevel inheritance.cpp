#include<iostream>
#include<conio.h>
using namespace std;
class university
{
string name;
string loc;
public:
void input()
{
cout<<"\n enter name of university and loc";
cin>>name>>loc;
}
void display()
{
cout<<"name is"<<name<<endl;
cout<<"\nloc is"<<loc ;
}
};
class student:public university
{
string sname;
int rn;
protected:
void input1()
{
cout<<"\n enter name and roll number";
cin>>sname>>rn;
}
void output1()
{
cout<<"name of student is"<<sname<<endl;
cout<<"roll number is "<<rn<<endl;
}

};
class percent : public student
{
float per ;
public:
void input2()
{
input1();
cout<<"\n enter percentage";
cin>>per;
}

void output2()
{
output1();

cout <<"\n percentage is"<<per;
}
};
int main()
{
percent p1;
p1.input();
p1.display();
// p1.input1();
// p1.output1();
p1.input2();
p1.output2();
getch();
}


