#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class library
{
string name;
string location;
public:
void input()
{
cout<<"\n Enter the name of library";
getline(cin,name);
cout<<"\n Enter the location";
cin>>location;
}
void output();
};
void library::output()
{
cout<<"\n name of library is"<<name;
cout<<"\n Location of library"<<location;
}
class book
{
protected:
string bname;
float cost;
int id;
void input1()
{
cout<<"\n Enter the name of book";
cin>>bname;
cout<<"\n Enter the cost of the book";
cin>>cost;
cout<<"\n Enter the id of the book";
cin>>id;
}
void output1()
{
cout<<"\nName of book is"<<bname;
cout<<"\n cost of the book is"<<cost;
cout<<"\n Id of the book is"<<id;
}
};
class cust_acc:public library,public book
{
string cname;
int d,m,y;
int duration;
public:
void display()
{
input1();
output1();
cout<<"\n Enter the name of customer";
cin>>cname;
cout<<"\n name of customer is="<<cname;
cout<<"\n Enter the date of issue dd/mm/yy";
cin>>d>>m>>y;
cout<<"\n The date of issue is="<<d<<"/"<<m<<"/"<<y;//12/4/21
cout<<"\n Enter the duration";
cin>>duration;
cout<<"\n Duration for issuing the book"<<duration<<"days";
}
};
int main()
{
cust_acc obj;
obj.input();
obj.output();
obj.display();
getch();
}


