#include<iostream>
using namespace std;
class marks
{
    int a,b,c,d,e;
    public:
    marks()
    {
        a=100; b=90; c=80; d=70; e=60;
    }
    public:
    marks(int p, int q, int r, int s, int t)
    {
        a=p; b=q; c=r; d=s; e=t;
    }
    public:
    void percentage()
    {
        cout<<"The percentage of given student is : "<<(a+b+c+d+e)*100/500<<endl;
    }
};
int main()
{
    marks m1;
    m1.percentage();
    marks m2(30,40,50,60,70);
    m2.percentage();
}
