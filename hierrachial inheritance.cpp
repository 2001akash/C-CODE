#<include <iostream>
#include<conio.h>
using namespace std;
class university
{
string name;
string loc;
public:
void input()
{
cout<<"\n enter name of university";
cin>>name;
cout<<"\n enter location";
cin>>loc;
}
void display()
{
cout<<"\n name is" <<name;
cout<<"\n location is"<<loc ;
}
};

class cse_dept:public university
{
int block;
int str;
public:
void input1()
{ cout<<"\n enter block and strength of CSE";
cin>>block>>str;
}
void display1()
{
cout<<"\n CSE Block is "<<block;
cout<<"CSE strength is"<<str;
}
};
class ece_dept:protected university
{
int block1;
int str1;
public:
void input2()
{ cout<<"\n enter block and strength of ECE";
cin>>block1>>str1;
}
void display2()
{
cout<<"\n ECE Block is "<<block1;
cout<<"stength of ECE block is"<<str1;
}
};
int main()
{
cse_dept d1;
d1.input();
d1.display();
d1.input1();
d1.display1();
ece_dept d2;
d2.input2();
// d2.input();
d2.display2();
getch();
}


