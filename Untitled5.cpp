#include <iostream>

using namespace std;

class String{

   public:

   int a(int i, string str[]){

       cout << "Enter 3 words: " << endl;

   for(i = 0; i < 3; ++i)

   {

       cin>>str[i];

   }

   }

};

int main()

{
	cout<<"\t\t program by Amit giri\n";

   String s;

   string str[3], temp;

   int i;

   s.a(i,str);

   for(i = 0; i < 2; ++i)

      for( int j = i+1; j < 3; ++j)

      {

         if(str[i] < str[j])

         {

           temp = str[i];

           str[i] = str[j];

           str[j] = temp;

         }

   }

   cout << "  reverse lexicographical order: " << endl;

   for(i = 0; i < 3; ++i)

   {

      cout << str[i] << endl;

   }

   return 0;

}
