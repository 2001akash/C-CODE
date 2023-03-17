#include<iostream>
using namespace std;
class student
{
string name;
int roll_no;
public:
void input()
{
cout<<"\n enter name of student";
cin>>name;
cout<<"\n enter roll no";
cin>>roll_no;
}
void display()
{
cout<<"\n name =" <<name;
cout<<"\n roll no ="<<roll_no ;
}
};
 
class test:public student
{
int m1,m2,m3;
double avg ;
public:
void input1()
{ cout<<"\n enter marks of 3 marks";
cin>>m1>>m2>>m3;
}
void display1()
{
	avg =(m1+m2+m3)/3.0;
 
 
cout<<"avg marks is"<<avg<<endl;
}
};
class sports:protected student
{
	int score_cricket;
int score_tennis;
public:
void input2()
{ 
cout<<"\n Enter the scores:";
cin>>score_cricket>>score_tennis;
}
void display2()
{
cout<<"\n Score in cricket is "<<score_cricket;
cout<<"\nScore in tennis is"<<score_tennis;
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

