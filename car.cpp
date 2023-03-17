#include<iostream>
using namespace std;
class car
{public:
char name[20],colour[20];
int cap,cost;
void input()
{cout<<"Enter the name of the car"<<endl;
cin>>name;
cout<<"Enter the cost of the car"<<endl;
cin>>cost;
cout<<"Enter the capacity of the car"<<endl;
cin>>cap;
cout<<"Enter the colour of the car"<<endl;
cin>>colour;
}
void output()
{cout<<"The name of the car is "<<name<<endl;
cout<<"The cost of the car is "<<cost<<endl;
cout<<"The capacity of the car is "<<cap<<endl;
cout<<"The colour of the car is "<<colour<<endl;
}
};
int main()
{car c1,c2,c3;
c1.input();
c2.input();
c3.input();
c1.output();
c2.output();
c3.output();
}


