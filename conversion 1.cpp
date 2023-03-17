#include<iostream>
 
using namespace std;
class point
{
int a;
public:
point(int x)
{
a=x;
}
point(){}
void operator *=(point &o1);
};
void point::operator *=(point &o1)
{
 
a=a*o1.a;
cout<<"the product of both objects is "<<a;
}
int main()
{
point o2(15),o3(5);
o2*=o3;
 
}

