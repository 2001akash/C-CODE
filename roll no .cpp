#include<iostream>
#include<conio.h>
using namespace std;
class student
{
int rn;
int age;
int marks[3];
public:
void input()
{
cout<<"\n Enter the roll number";
cin>>rn;
cout<<"\n Enter age of student";
cin>>age;
cout<<"\n Enter the marks of 3 subjects";
int i;
for(i=0;i<3;i++)
{
cin>>marks[i];//50 60 70
}
}
void percentage()
{
cout<<"\n roll number is"<<rn;
cout<<"\n Age is"<<age;
int total=0,i;

float per;
for(i=0;i<3;i++)//i=1
{
total=total+marks[i]; //total= 180
}
per=total/3.0;//180/3.0
cout<<"\n Percentage scored by student is"<<per;
}
};
int main()
{
student s1;
s1.input();
s1.percentage();
getch();
}



