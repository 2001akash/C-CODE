#include<iostream>
using namespace std;
int fun(int a)
{
	if(a>10)
	{
		return a;
		
	}
	return a*fun(a+4); 
}
int main()
{	cout<<fun(5);
	
}
            


