#include<iostream>
#include<conio.h>
using namespace std;
class student
{
int rn;
float marks;
public:
student()//default cons
{
rn=12;
marks=56.7;
}
student(int x, float y)//parameterized cons
{
rn=x;
marks=y;
}

student(student &obj)//copy cons
{
rn=obj.rn;//13
marks=obj.marks;//78.5
}

void display()
{
cout<<"\n Roll number is"<<rn;
cout<<"\n Marks is"<<marks;
}
};
int main()
{
student s1;
s1.display();
student s2(13,78.5);
s2.display();
student s3(s2);//student s3=s2;
s3.display();
getch();
}


