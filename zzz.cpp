#include <iostream>
using namespace std;
class Base
 { 
public:
 Base()
{ 
cout<<"Constructing Base";
} 
// this is a virtual destructor: 
virtual ~Base()
{ 
cout<<"Destroying Base";
} };
