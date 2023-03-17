#include<iostream>
using namespace std;
class book
{
public:
    char name[28];
    int pages;
    float cost;
    public:
    book()
    {
        char name[]="Perks OF Being a wallflower";
         pages=200;
         cost=500;
 
    }
    ~book()
    {
        cout << "Object destroyed" << endl;
    }
    void display()
    {
        cout << name<<endl;
        cout << cost <<endl;
        cout << pages<< endl;
    }
};
int main()
{
    book A1;
    A1.display();
    {
 
        book A2;
        cout << "second object created " << endl;
        A2.display();
    }
}
 

