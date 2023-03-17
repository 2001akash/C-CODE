#include<iostream>
#include<conio.h>
using namespace std;
template<class T>
void rev( T arr[],int size)
{
int i;
for(i=size-1;i>=0;i--)
{
cout<<arr[i]<<endl;

}
}
int main()
{
int arr[]={1,2,5,6,7};
rev(arr,5);
float arr1[]={1.1,3.4,6.7};
rev(arr1,3);
getch();
}



