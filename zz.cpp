#include <iostream>
using namespace std;
class Base
{
       public:
          Base(){ cout<<"Constructor: Base"<<endl;}
          ~Base(){ cout<<"Destructor : Base"<<endl;}
};
class Derived: public Base
{
     //Doing a lot of jobs by extending the functionality
       public:
           Derived(){ cout<<"Constructor: Derived"<<endl;}
           ~Derived(){ cout<<"Destructor : Derived"<<endl;}
};
void main()
{
        Base *Var = new Derived();
        delete Var;
}
