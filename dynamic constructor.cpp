#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
public:
char *p;
demo()
{
p=new char[10];
p="LPU";
}
void display()
{
cout<<"\n content stored is"<<p;
}
};
int main()
{
demo *p1=new demo;
p1->display();
getch();
}

