#include<iostream>
#include<conio.h>
using namespace std;
void test( int x)
{
try{
if (x==1)
throw x;
else if(x==-1)
throw 1.0;
else if (x==0)
throw 'c';
}

catch(int m)
{cout<<"\n caught integer";


}
catch(double p)
{
cout<<"\n caught double excpt";

}
catch(char z)
{
cout<<"\n caught char excp";
}

cout<<"\n value of x"<<x;
}

int main()
{
test(1);
test(0);
test(-1);
test(5);
getch();
}


