

#include<iostream>
#include<conio.h>
using namespace std;
int fun(char arr[]);
int main()
{
char arr[20],i;

cout<<"\nEnter string";
gets(arr);//lpu
int res=fun(arr);//base address of array
cout<<res;
getch();
}
int fun(char arr[20])//lpu
{
int i,count=0;
for(i=0;arr[i]!='\0';i++) // lpu'\0'
if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
count++;//1
return count;
}


