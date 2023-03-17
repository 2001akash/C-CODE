
#include<iostream>
using namespace std;
template<class T1>
class square
{
public:
T1 a[5];
void input()
{
cout<<"\n Enter the five values::";
for(int i=0;i<5;i++)
{
	cin>>a[i];
	cout<<endl;
}
}
void output()
{
	cout<<"Square of All enter5 value is";
	for(int i=0;i<5;i++)
	{
		cout<<a[i]*a[i];
		cout<<endl;
	}
}
};
int main()
{
    square<int>obj1;
    obj1.input();
    obj1.output();
    square<float>obj2;
    obj2.input();
    obj2.output();
    }





