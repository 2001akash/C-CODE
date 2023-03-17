#include<iostream>
using namespace std;
class ques
{
    int a;
    int b;
    public:
    ques()
    {
 
    }
    ques(int x, int y)
    {
        a=x;
        b=y;
    }
    friend ques operator-(ques &p, ques &q);
    void display();
};
ques operator-(ques &p, ques &q)
{
    return ques((p.a-q.a), (p.b-q.b));
}
void ques:: display()
{
    cout<<a<<"\t"<<b<<endl;
 
}
int main()
{
    ques i1, i2, i3;
    i1=ques(5,6);
    i2=ques(3,5);
    i3=operator-(i1,i2);
    i1.display();
    i2.display();
    i3.display();
 
 
}

