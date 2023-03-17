#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
int *a= new int;
*a=100;
cout << " The Output is:a="<<a<<endl;
cout<<"the output is :"<<*a<<endl;

delete a;
//*a=200;
cout<<"\noutput after deletion is\n"<<a;
cout<<endl<<*a;//garbage value
getch();
return 0;
}

