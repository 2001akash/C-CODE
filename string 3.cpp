#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
string s;
int count=0,i;
cout<<"\n Enter the string";
getline(cin,s);//lovely\0
char c;
cout<<"\n enter the character to be searched";
cin>>c;//l
for(i=0;s[i]!='\0';i++)
{
if(c==s[i])
{
count++;//count=2
}
}
cout<<"\n number of times a character is occuring"<<count;
getch();
}



