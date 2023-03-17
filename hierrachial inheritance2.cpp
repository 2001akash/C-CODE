#include<iostream>
using namespace std;
class student
{
string name;
int roll_no;
public:
void input()
{
 
cin>>name;
 
cin>>roll_no;
}
void display()
{
cout<<"\nName= "<<name;
cout<<"\nRoll number= "<<roll_no ;
}
};
 
class test:public student
{
int mrk1,mrk2,mrk3;
float avg;
public:
void input1()
{ 
 
cin>>mrk1>>mrk2>>mrk3;
}
void display1()
{
avg =(mrk1+mrk2+mrk3)/3.0;
cout<<"\nThe average marks= "<<avg<<endl;
}
};
class sports:protected student
{
int score_cricket;
int score_basketball;
public:
void input2()
{ 
 
cin>>score_cricket>>score_basketball;
}
void display2()
{
cout<<"\nScore in cricket is "<<score_cricket;
cout<<"\nScore in basketball is"<<score_basketball;
}
};
int main()
{
test t1;
t1.input();
t1.display();
t1.input1();
t1.display1();
sports s1;
s1.input2();
s1.display2();
}

