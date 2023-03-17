#include<iostream>
#include<string>
using namespace std;
class telephone_company
{
protected:
string name;
string loc;
};
class customer:public telephone_company
{
protected:
	string gender;
};
class contact:public customer
{
protected:
int cc;
int std_code;
int number,num1,num2;
public:
void getData()
{
cout<<"enter name"<<endl;
cin>>name;
cout<<"enter location"<<endl;
cin>>loc;
cout<<"enter Gender"<<endl;
cin>>gender;
cout<<"enter country_code,std_code"<<endl;
cin>>cc>>std_code;
cout<<"enter mobile number:"<<endl;
cin>>number>>num1>>num2;
}
void showdata()
{
cout<<"\nname is"<<name;
cout<<"\nlocation is"<< loc;
cout<<"\nGender is"<<gender;
cout<<"\ncountry_code is + "<<cc;
cout<<"\nstd_code is "<<std_code;
cout<<"\nmobile number:"<<number<<"-"<<num1<<"-"<<num2;
}
};
int main()
{
contact c;
c.getData();
c.showdata();
}
 
 

