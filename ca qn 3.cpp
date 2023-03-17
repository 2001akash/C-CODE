  #include<iostream>
  using namespace std;
  int main()
{
	int a=10,b=20;
	int *p = & a;
     *p=b;
   	
	cout<<*p<<""<<a<<""<<b<<endl;
	return 0;
}
	
