
#include<iostream>
#include<conio.h>
using namespace std;
template<class T>
void swap(T a, T b)
{
T temp;
temp=a;
a=b;
b=temp;
cout<<"\n Value after swapping is"<<a<<"and"<<b;
}
int main()
{
swap(23,45);
swap('A','B');
getch();
}


