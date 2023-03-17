#include<iostream>
#include<conio.h>
using namespace std;
int count1=0;
class test
{
public:
test()
{
count1++;
cout<<"constructor msg: object number" << count1<< "created.."<<endl;
}
~ test()
{
cout<<"Destructor msg: object number"
<< count1 <<"destroyed..";
count1--;
}
};
int main()
{
cout<< "inside main block"<<endl;
cout<<"creating first object"<<endl;
{
test T1;
{
cout<<"Inside block 1"<<endl;
cout<<"creating two more objects T2 and T3"<<endl;
test T2, T3;
cout<<" Leaving block 1"<<endl;
}
cout<<"Back inside main"<<endl;
}

getch();
}
