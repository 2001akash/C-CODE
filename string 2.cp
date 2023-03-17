# include<iostream>
# include<string>
using namespace std;
int main()
{
string s;
int count=0,i;
cout<<"\n Enter the string";
getline(cin,s);//lpu\0
for(i=0;s[i]!='\0';i++)
{
count++;
}
cout<<"\n number of characters are"<<count<<endl;
for(i=0;s[i]!='\0';i++)
{
s[i]=s[i]-32;
cout<<s[i];
}
}



  
  
  

