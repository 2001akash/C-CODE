// C++ STL vector, reserve(), capacity() and size()
#include <vector>
#include <iostream>
#include<conio.h>
using namespace std;

int main(void)
{
// vector container
vector <int> vec1;
unsigned int i;

// push/insert data
vec1.push_back(4);
vec1.push_back(2);
vec1.push_back(10);
vec1.push_back(17);// 4 2 10 17
// print the data and do some operations
cout<<"vec1 vector data: ";
for(i=0; i<vec1.size(); ++i)
cout<<vec1[i]<<' ';
cout<<endl;
cout<<"\nOperation: vec1.capacity();"<<endl;
cout<<"Current capacity of vec1 vector is "<<vec1.capacity()<<endl;//4
cout<<"\nOperation: vec1.reserve(10);"<<endl;
vec1.reserve(10);
cout<<"Current capacity of vec1 vector is "<<vec1.capacity()<<endl;//10
cout<<"\nOperation: vec1.size()"<<endl;
cout<<"Current size of vec1 vector is "<<vec1.size()<<endl;
getch();
return 0;

}


