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
friend void operator +(point &);
};
void operator +(point &p)// 
{
p.x=+p.x;
p.y=+p.y;
p.z=+p.z;
}
 
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
 
point p1;
p1.get(9,-8,7);
p1.display();
+p1;
p1.display();;
}

