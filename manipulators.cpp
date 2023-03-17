#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
main()
{
int a;
float f;
char c[10]="hello";
cout<<c<<ends;
cout<<"\nEnter the integer no";
cin>>a;
//cout<<setbase(8)<<a;//setbase(16)
//fflush(stdin);
//gets(s1);
cout<<"\nNo is:"<<a<<endl;
cout<<"with setw:"<<setw(8)<<a<<endl;
cout<<"With setfill:"<<setw(9)<<setfill('*')<<a<<endl;
cout<<"Decimal base:"<<dec<<a<<endl;
cout<<"Octal base:"<<oct<<a<<endl;
cout<<"Hexadecimal base:"<<hex<<a<<endl;
cout<<"Enter the float no:";
cin>>f;//567.89
cout<<"with setprecision:"<<setprecision(4)<<f<<endl;//567.8

/* cout<<"professional"<<endl;
cout<<"University";
cout.flush();*/
getch();
}


