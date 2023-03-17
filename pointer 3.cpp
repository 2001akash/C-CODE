

#include<conio.h>


class simple
{
public:

int a;
};
int main()
{
simple s,*p;
p=&s;
cin>>s;//50
cout<<"the value is"<<p->a;
getch();
}


