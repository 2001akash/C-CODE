#include<iostream>
#include<conio.h>
using namespace std;
class point
{
int x;
int y;
int z;
public:
void get(int a,int b,int c);
void display();
void operator-()
{
x=-x;//x=-9
y=-y;//y=-8
z=-z;//z=7
}
};
void point::get(int a,int b,int c)
{
x=a;
y=b;
z=c;
}
void point::display()
{
cout<<"\nCo-ordinates of point are P("<<x<<","<<y<<","<<z<<")";
}

int main()
{

point p;// x=9 y=8 z=-7
p.get(9,8,-7);
p.display();
-p;
p.display();

getch();
}


