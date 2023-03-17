#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{
ofstream outf("department.txt");
char dep[20];
cout<<"enter the department";
cin>>dep;
outf<<dep<<"\n";
int work_load;
cout<<"enter the work_load";
cin>>work_load;
outf<<work_load<<"\n";
outf.close();
outf.open("emp1.txt");
outf<<"ramesh\n";
outf<<"kapil\n";
outf<<"rajesh\n";
outf.close();
const int n=90;
char line[n];
ifstream inf;
inf.open("department.txt");
cout<<"contents of department.txt\n";
while(inf)
{
inf.getline(line,n);
cout<<line<<endl;
}
inf.close();
inf.open("emp1.txt");
cout<<"contents of emp1.txt\n";
while(inf)
{ inf.getline(line,n);
cout<<line;
cout<<endl;
}
inf.close();
getch();
}
