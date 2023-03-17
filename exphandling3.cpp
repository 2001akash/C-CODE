#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a;
int b;
cin>>a>>b;
try
{
if (b==0)
{
throw b;
}
else if(b==1)
{
throw 1.0;
}


else
{
cout<<"Result is"<<a/b;
}
}
catch(...)//generic catch block
{
cout<<"\n an exception has occured";
}
getch();
}


