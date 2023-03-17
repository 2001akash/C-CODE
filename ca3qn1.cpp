 #include<iostream>
#include<conio.h>
using namespace std;
template <class t>
void sort(t arr[], int size)

{   
	int i,j;
	t temp;
	for(i=0;i<size;i++)//i=2
	{
	
		for(j=i+1;j<size;j++)//j=3
		{
		
			if(arr[i]>arr[j])
			{
				temp=arr[i];//temp=5
				arr[i]=arr[j];//a[0]=3
				arr[j]=temp;//a[1]=5 // 3 5 6 7 8
			}
		}
	}
	cout<<"\nSorted elements are :";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{

	int s;
	cout<<"how many values you want to enter :";
	cin>>s;
	int a[s],i;
	cout<<"\nEnter integer elements: \n ";
	for(i=0;i<s;i++)
	{
		cin>>a[i];
	}
	sort(a,s);
	
	char b[s];
	cout<<"\nEnter character elements : \n";
	for(i=0;i<s;i++)
	{
		cin>>b[i];
	}
	sort(b,s);
	
	float c[s];
	cout<<"\nEnter float elements: \n";
	for(i=0;i<s;i++)
	{
		cin>>c[i];
	}
	sort(c,s);
	
	
}

