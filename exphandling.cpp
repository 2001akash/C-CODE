#include<iostream>
using namespace std;
int main()
{
int a,b;
cout << "Enter a and b:"<<endl;
cin>>a>>b;
try
{
if(b!=0)
{

cout << "Result="<<a/b;
}



else
{
throw(b);
}
}
catch(int n)
{
cout << "Value of b is 0 please enter a valid vlaue:::"<<endl;
}
}



