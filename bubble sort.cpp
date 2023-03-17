#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a[5],i,j,temp;
cout<<"\nEnter the elements";
for(i=0;i<5;i++)
{
cin>>a[i];
}// 5 3 7 6 8
for(i=0;i<5;i++)//i=2
for(j=i+1;j<5;j++)//j=3
if(a[i]>a[j])
{
temp=a[i];//temp=5
a[i]=a[j];//a[0]=3
a[j]=temp;//a[1]=5 // 3 5 6 7 8
}
cout<<"\nSorted elements are";
for(i=0;i<5;i++)
{
cout<<a[i]<<endl;
}
getch();
}


