// program for area by using switch case
#include<iostream>
using namespace std;
int main()
{
int r,l,b,num;
cout<<"Enter the number for area 1.circle 2.square 3.rectangle"<<endl;
cin>>num;
switch(num)
{
case 1:
cout<<"Radius of circle : ";
cin>>r;
cout<<"Area of circle= "<<3.14*r*r;
break;
case 2:
cout<<"Side of square : ";
cin>>l;
cout<<"Area of square= "<<l*l;
break;
case 3:
cout<<"Length of rectangle : ";
cin>>l;
cout<<"Breadth of rectangle : ";
cin>>b;
cout<<"Arae of rectangle= "<<l*b;
break;
}
return 0;
}
