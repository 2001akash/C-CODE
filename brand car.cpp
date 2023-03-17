#include <iostream>
using namespace std;
class mobile
{
public:
char name[39], brand[30];
int cost;
int model;
void input();
void output();
} n1, n2;
void mobile::input()
{
cout<<"name";
cin>>name;
cout<<"brand";
cin>>brand;
cout<<"cost";
cin>>cost;
cout<<"model";
cin>>model;
}
void mobile::output()
{
cout<<"name="<<name<<endl;
cout<<"brand="<<brand<<endl;
cout<<"cost="<<cost<<endl;
cout<<"model="<<model<<endl;

}
int main()
{
n1.input();
n1.output();
n2.input();
n2.output();
return 0;
}
