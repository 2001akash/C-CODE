#include<iostream>
#include<conio.h>
using namespace std;
class initialist
{
public:
int a;
float b;
initialist(int x, float y):a(x),b(y)
{
cout<<"\n lets learm concept of initilizer list";
}
void display()
{
cout<<"\n value 1="<<a<<endl;
cout<<"\n value 2="<<b<<endl;
}
};
int main()
{
initialist i1(20,6.5);
i1.display();
getch();
}
