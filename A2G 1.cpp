#include <iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int a=0;
	int b=0;
	int c=0;
	   for (int j=0;j<n;j++)
	   {
	   int x,y,q;
	   cin>>x;
	   a+=x;
	   cin>>y;
	   b+=y;
	   cin>>q;
	   c+=q;
	  }
	 if (a==0 && b==0 && c==0)
	 {
	  cout <<"YES"<<endl;
	 }
	 else 
	 {
	   cout <<"NO"<<endl;
	 }	   
}
