#include<iostream>
#include<conio.h>
using namespace std;
class book
{
public:
char name[30];
float cost;
int page;
void input( )
{
cout<<"\n enter details of car";
cin>>name>>cost>>page;
}
void display()
{
cout<<"\n Name of book"<<name;
cout<<"\n cost of book"<<cost;
cout<<"\n pages of book"<<page;
}
};
int main()
{
book b1,b2;
book *ptr,*ptr1;
ptr=&b1;
ptr->input();
ptr->display();
ptr1=&b2;
(*ptr1).input();
(*ptr1).display();
		if(pages>100)

{
cout<<"\n name of book"<<b1.name;
}
else
cout<<"\n name of book"<<b2.name;

getch();
}



