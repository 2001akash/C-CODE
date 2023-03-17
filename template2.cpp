//template with constructor
#include<iostream>
#include<conio.h>
using namespace std;
template<class t1,class t2>
class example
{ public:
t1 a;
t2 b;
public:
example(t1 x,t2 y)
{ a=x;
b=y;
}
void output()
{
cout<<"first value"<<a<<endl;
cout<<"second value"<<b<<endl;
}
};
int main()
{
example<int,float>ob(2,3.5);
ob.output();
example<char,int>ob1('A',3);
ob1.output();
getch();
}


