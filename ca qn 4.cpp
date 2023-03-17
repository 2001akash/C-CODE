#include <iostream>
#include <string>
using namespace std;

int main()
{
// Complete the program
string s1,s2,s;
getline(cin,s1);
getline(cin,s2);



cout <<s1.length()<<" "<<s2.length()<<endl;
s=s1+s2;
cout<<s<<endl;
s=s1;
s1.replace(0,1,s2,0,1);

s2.replace(0,1,s,0,1);
cout <<s1<<" "<<s2<<endl;


return 0;
}


