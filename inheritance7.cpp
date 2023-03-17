#include<iostream>
using namespace std;
class student
{
public:
string name;
int rn;
void input()
{
cout<<"\n Enter the name of student";
getline(cin,name);
cout<<"\n Enter the roll number";
cin>>rn;
}
void output()
{
cout<<"\n Name of student"<<name;
cout<<"\n Roll number is"<<rn;
}
};
class academic
{
public:
int m1,m2,m3;
void input1()
{
cout<<"\n Enter the marks of 3 subjects";
cin>>m1>>m2>>m3;
cout<<"\n Marks of 3 subjects are"<<m1<<endl<<m2<<endl<<m3;
}
};
class percent:public student,protected academic
{
int total;
float per;
public:
void calculate()
{
input1();
total=m1+m2+m3;
per=total/3.0;
cout<<"\n percentage of student is"<<per;
}
};
int main()
{
percent p1;
p1.input();
p1.output();
p1.calculate();

}


