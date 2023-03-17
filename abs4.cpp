#include<iostream>
#include<conio.h>
using namespace std;
template<class T>
class demo
{
public:
T arr[3];
int i;
void input()
{
for(i=0;i<3;i++)
{
cin>>arr[i];
}
}
void output()
{
for(i=0;i<3;i++)
{
cout<<arr[i]+2<<endl;
}
}
};
int main()
{
demo<int>ob1;
ob1.input();
ob1.output();

demo<float>ob2;
ob2.input();
ob2.output();


getch();
}


