#include<iostream>
#include<conio.h>
using namespace std;
template<class T>

void countocc(T arr[],T val,int size)
{
int i,count=0;
for(i=0;i<size;i++)
{
if(val==arr[i])
{
count++;
}
}
cout<< count<<endl;
}
int main()
{
int arr[]={1,2,3,4,5,4};
char arr1[]={'a','b','c','d','e','d','d','d','d'};
countocc(arr,4,6);
countocc(arr1,'d',9);
getch();
}


