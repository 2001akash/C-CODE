// C++ STL list, sort(),HARWANT SINGH ARRI
#include <list>
#include <iostream>
#include<conio.h>
using namespace std;
int main(void)
{
// list container
list <int> ls1;
// list iterator
list <int>::iterator Itr;
// insert/push data into the list
ls1.push_back(31);
ls1.push_back(12);
ls1.push_back(40);
ls1.push_back(15);
ls1.push_back(9);
ls1.push_back(44);
// print the data and do some operations
cout<<"Before sorting, ls1 list data: ";
for(Itr = ls1.begin(); Itr != ls1.end(); Itr++)
cout<<" "<<*Itr;
cout<<endl;
cout<<"\nOperation: ls1.sort();"<<endl;
ls1.sort();
cout<<"After sorting, ls1 list data: ";
for(Itr = ls1.begin(); Itr != ls1.end(); Itr++)
cout<<" "<<*Itr;
cout<<endl;

getch();
}


