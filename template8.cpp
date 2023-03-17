#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Arrayindex
{
char msg[30];
public:
Arrayindex(){strcpy(msg,"Array Index Out of Bound");}
void getmessage(){cout<<msg<<endl;}
};
int main()
{
int arr[10]={10,12,23,34,44,52,60,17,18,29};
Arrayindex ar;
try
{
for(int i=0;;i--)
{
if(i<0||i>9)
throw ar;
cout<<"\nElements";
cout<<arr[i]<<endl;
}
}
catch(Arrayindex e)
{
e.getmessage();
}
getch();
}

