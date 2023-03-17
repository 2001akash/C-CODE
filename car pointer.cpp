#include<iostream>
#include<conio.h>
using namespace std;
class car
{
char name[30];
float cost;
int capacity;

public:
void display()
{

cin>>name;
cout<<name;
cin>>cost;
cout<<cost;
cin>>capacity;
cout<<capacity;
}
};

int main()
{
car c1;
car *ptr;
ptr=&c1;
ptr->display();//(*ptr).display();
getch();
}

