#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

//Write a single character in the file using the put member function

int main() {
ofstream out("sample.txt");
out.put('A');
out.close();
getch();
}


