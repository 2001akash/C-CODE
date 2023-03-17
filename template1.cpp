#include<iostream>
#include<conio.h>
using namespace std;
template<class T1>
class demo
{
public:
T1 a,b;

void input()
{
cout<<"\n Enter the values of a and b";
cin>>a>>b;
}
void compare()
{
if(a>b)
{
cout<<a<<"is greater";
}
else
cout<<b<<"is greater";
}
};
int main()
{
demo <double>d1;
d1.input();
d1.compare();
demo <int>d2;
d2.input();
d2.compare();
getch();
}


