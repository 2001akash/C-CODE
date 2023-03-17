
#include <iostream>
#include <bitset>
#include <string>
using namespace std;
class Binary{
    protected:
        char c[32];
    public:
        Binary(int n)
		{
            string s = bitset<32>(n).to_string();
            for(int i = 0; i < s.length(); i++) c[i] = s[i];
        }
        virtual void display(){
            cout<<"Binary: "<<c<<endl;
        }
};
class Decimal: public Binary{
    int decimal;
    public:
        Decimal(int n): Binary(n){
            decimal = n;
        }
        void display(){
            cout<<"Decimal: "<<decimal<<endl;
        }
};
class Octal: public Binary{
    int octal;
    public:
        Octal(int n): Binary(n){
            octal = n;
        }
        void display(){
            cout<<"Octal: "<<oct<<octal<<endl;
        }
};
int main(){
    cout<<"Enter an integer: ";
    int x; cin>>x;


    Binary binary(x);
    binary.display();


    Decimal decimal(x);
    decimal.display();


    Octal octal(x);
    octal.display();
    
    return 0;
}
