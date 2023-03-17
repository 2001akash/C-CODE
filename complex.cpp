#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
int x;
int y;
public:
complex()
{
}
complex(int a,int b)
{
x=a; y=b;
}
complex operator+( complex &);
void display();
};
complex complex::operator+(complex &d)//c3=c1.operator+(c2);
//c1.x=2 c1.y=6 c2.x=8 c2.y=9
{
complex temp;
temp.x=x+d.x;//temp.x=2+8
temp.y=y+d.y;// temp.y=6+9
return temp;
}
void complex::display()
{
cout<<x<<"+i"<<y<<endl;
}
int main()
{
complex c1,c2,c3;// c1.x=2 c1.y=6 c2.x=8 c2.y= 9
c1=complex(2,6);//complex c1(2,6);
c2=complex(8,9);//complex c2(8,9)
//c3=c1+c2;
c3=c1.operator+(c2);
cout<<"C1 = ";
c1.display();
cout<<"C2 = ";
c2.display();
cout<<"Sum = ";
c3.display();
getch();
}
