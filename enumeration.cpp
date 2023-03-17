#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
class student
{
char name[10];
int rn;
public:
void getdata()
{
cout<<"Enter name";
cin>>name;
cout<<"Enter roll no ";
cin>>rn;
}
void showdata()
{
cout<<" Name = "<<name<<endl;
cout<<"Roll no = "<<rn<<endl;
}


};
main()
{
student stu;
fstream file;
file.open("test.dat",ios::binary|ios::out);
for(int i=1;i<=3;i++)
{
cout<<"Student details "<<endl;
stu.getdata();
file.write((char*)&stu,sizeof(stu));
}
file.close();
file.open("test.dat",ios::binary|ios::in);

while(!file.eof())
{
cout<<"Student is "<<endl;

file.read((char*)&stu,sizeof(stu));
stu.showdata();
}
getch();
}
