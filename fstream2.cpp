#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main() {
fstream out("sample.txt", ios::app);
cout<<"out: "<<out.tellp()<<endl;
out.seekp(7,ios::beg);
cout<<"out: "<<out.tellp()<<endl;
out.close();
getch();
}


