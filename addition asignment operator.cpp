#include<iostream>
#include<conio.h>
using namespace std;
class oint
{
int a;
public:
oint(int x)
{
a=x;
}
oint(){}
void operator +=(oint &o1);
};
void oint::operator +=(oint &o1)
{
//o1.a=o1.a+a;
a=a+o1.a;//a= 10;o1.a=5 (10+5)
cout<<a;
}
int main()
{
oint o2(10),o3(5);//o2.a=10 o3.a=5
o2+=o3;// o2=o2+o3 o2.operator +=(o3);
getch();
}



