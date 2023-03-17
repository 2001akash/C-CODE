#include<iostream>
using namespace std;
class laptop
{
float *cost;
char *name;
int *ram_size;
 
public:
void input()
{
cost=new float;
cout<<"\n enter the cost";
cin>>*cost;
name=new char[10];
cout<<"\n enter the name";
cin>>name;
ram_size= new int;
cout<<"\n enter the ram_size of laptop";
cin>>*ram_size;
}
void output()
{
cout<<"\n Name is"<<name;
cout<<"\n cost of laptop is"<<*cost;
cout<<"\n ram_size of laptop is"<<*ram_size;
}
};
int main()
{
laptop *ptr=new laptop;
ptr->input();
ptr->output();
delete ptr;
}
 

