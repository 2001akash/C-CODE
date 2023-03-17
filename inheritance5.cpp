#include<iostream>
#include<conio.h>
using namespace std;
class person
{
protected:
char name[30];
int age;
};
class boy:public person
{
protected:
int weight;
public:
int height;
};
class student:public boy
{
public:
int rollno;
public:
void getData()
{
cout<<"enter name";
cin>>name;
cout<<"enter age";
cin>>age;
cout<<"enter weight";
cin>>weight;
cout<<"enter roll no";
cin>>rollno;
}
void showdata()
{
cout<<"\nname is"<<name;
cout<<"\nage is"<< age;
cout<<"\nweight is"<<weight;
cout<<"\nroll no is"<<rollno;
cout<<"\nheight id"<<height;
}
};
int main()
{
student ob;
ob.height=6;
ob.getData();
ob.showdata();
getch();
}


