#include<iostream>
#include<conio.h>
using namespace std;
class inc
{
int x;
public:
void getdata(int a)
{
x=a;
}
void operator !()
{
x=!x;// x=0
}
void display()
{
cout<<x<<endl;
}
};
int main()
{
inc i;// i.x=10
i.getdata(0);
i.display();
!i;// i.operator!();
i.display();
getch();

}


