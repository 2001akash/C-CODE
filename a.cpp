#include <iostream>
using namespace std;
class sample
{
private:
int a;
public:
void input(int p)
{
a=p;
}
void output();
friend int fact(sample n1);
};

void sample::output()
{
int i, fact=1;
for(i=1; i<=a; i++)
{
fact=fact*i;
}
cout<<"fact="<<fact;
}
int fact(sample n1)
{
n1.output();
}
int main()
{
sample n1;
n1.input(6);
// n1.output();
fact(n1);
}



