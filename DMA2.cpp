#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
float *ptr=new float;
cout<<"\n enter radius";
cin>>*ptr;//7.6

cout<<"\n area of circle is "<<3.142* *(ptr)* *(ptr);
delete ptr;
cout<<endl<<*ptr;
getch();
}


