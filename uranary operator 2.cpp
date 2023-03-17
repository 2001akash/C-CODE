#include<iostream>
using namespace std;
class point
{
int x;
int y;
int z;
public:
void get(int a,int b,int c);
void display();
friend void operator -(point &);
};
void operator-(point &p)// p.x=9 p.y=-8 p.z=7
{
p.x=-p.x;//-9
p.y=-p.y;//-(-8)=8
p.z=-p.z;//-7
}

void point::get(int a,int b,int c)
{
x=a;//x= 9
y=b;//y=-8
z=c;//z=7
}
void point::display()
{
cout<<"\nCo-ordinates of point are P("<<x<<","<<y<<","<<z<<")";

}

int main()
{

point p1;// x=9 y=-8 z=7
p1.get(9,-8,7);
p1.display();
-p1;// operator-(p1);
p1.display();

;
}


