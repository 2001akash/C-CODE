#include<iostream>
using namespace std;
class  Array
{
private:
int list[];
public:
void inputAndStore()
{
	 Scanner sc =new Scanner (System.in)
	cout<<"enter the size of array";
	int n =sc.nextInt();
	list =new int[n];
	for (int i=0;i<list.length;i++)
	{
		cout<("ENTER the value of list["+i+"]");
		list[i]=sc.nextInt();
		
	}
}
public:
void display()
{
	for(int i=0;i<list.length;i++)
	cout<<list[i];
	
}
public:
void main()
{
	inputAndStore();
	display();
}	
};
