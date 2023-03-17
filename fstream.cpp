#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main() {
char c;
ifstream in("sample.txt");
in.seekg(0,ios::end);
in.get(c);
cout<<c<<endl;
in.close();
getch();
}



