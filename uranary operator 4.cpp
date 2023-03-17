//unary operator overloading of pre decrement operator
#include<iostream>
#include<conio.h>
using namespace std;

class uni
{
public:
int x;
int y;
public:
void getdata(int a, int b);
void display(void);
void operator--();
};
void uni :: getdata(int a, int b)
{
x=a;
y=b;
}
void uni :: display()
{
cout<<x<<endl;
cout<<y<<endl;
}
void uni:: operator--()
{
//x--;
x=x-1;//19
//y--;
y=y-1;//29
}
int main()
{
uni r1;// x=20 y=30
r1.getdata(20,30);

cout<<endl;
r1.display();
--r1;
cout<<endl;
r1.display();
getch();

}


