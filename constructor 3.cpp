#include<iostream>
 
using namespace std;
class marks
{
int m1,m2;
public:
marks()//default
{
m1=0;
m2=0;
}
marks(int a, int b)// parameterized const
{
	m1=a;
m2=b;
}
void percentage()
{
	int p=m1+m2;
	float per=(p/200)*100.0;
	cout<<per<<endl;
}
};
int main()
{
marks m;
m.percentage();
marks m1(95,87),m2(95,90);
m1.percentage();
m2.percentage();
}
 
 
 
 
 
