#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int num1,num2,result;
char msg1[]="Exception";
cout<<"\nEnter two numbers";
cin>>num1>>num2;
try
{
result=num1*num2;
if(result>10&&result<100)
throw result;
if(result>100&&result<1000)
throw msg1;
if(result>1000&&result<2000)
throw 'C';
cout<<result;
}
catch(int result1)
{
cout<<"\nThe result is "<<result1;
}
catch(char msg[20])
{
cout<<"\nThe result is "<<msg;
}
catch(double d)
{
cout<<"\nThe result is "<<d;

}
catch(...)
{
cout<<"\nhandle all types of exceptions";
}

getch();
}


