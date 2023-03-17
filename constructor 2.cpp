#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
int p,q;
public:
sample()//default
{
p=0;
q=0;
}
sample(int a, int b)// parameterized const
{
p=a;
q=b;
}
void mean()
{
cout<<(p+q)/2<<endl;
}
};
int main()
{
sample s;
s.mean();
sample s1(5,7);
s1.mean();
getch();
}


