#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int num=100;
float pi=3.142;
char ch='X';
void *ptr;// generic pointer
ptr=&num;
cout<<"\n integer value pointer pointing towards="<<*(int*)ptr;//100
ptr=&pi;
cout<<"\n float value pointer pointing towards="<<*(float*)ptr;
ptr=&ch;
cout<<"\n char value pointer pointing towards="<<*(char*)ptr;
getch();
}


