#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class book
{
private:
string name;
float cost;
int pages;
public:
void input()
{
cout<<"\n Enter the name of the book";
cin>>name;
cout<<"\n Enter the cost of the book:";
cin>>cost;
cout<<"\n enter the pages of the book";
cin>>pages;
}
void output()
{
cout<<"\n name of the book is"<<name;
cout<<"\n cost of the book is"<<cost;
cout<<"\n pages of the book is"<<pages;
}
};
int main()
{
book *p=new book;
p->input();
p->output();
delete p;
getch();
}


