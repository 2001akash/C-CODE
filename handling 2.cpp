#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
main()
{
char c;
cout<<"Enter the character";
cin>>c;
ofstream fout("ABC.txt",ios::out);
while(c!='x')//hellox
{
fout.put(c);//hello
cin>>c;
}
fout.close();
ifstream fin("ABC.txt");
char j;//hello
cout<<"Contents of file are";
fin.get(j);
while(fin)
{
cout<<j;//hello
fin.get(j);
}
fin.close();
getch();
}


