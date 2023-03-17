#include <iostream>
#include <string>
using namespace std;
class Number{
    protected:
        int x;
    public:
        Number(){}
        virtual void operation(){};
};
class Even: public Number{
    public:
        Even(int y){
            x = y;
        }
        bool is_even(){
                
            if(x%2==0) return true;
            else return false;
        }
        void operation(){
            if(is_even()) cout<<x<<" is even\n";
            else cout<<x<<" is not even\n";
        }
};
class Odd: public Number{
    public:
        Odd(int y){
            x = y;
        }
       bool is_odd(){
             
        if(x%2!=0)     return true;
        else    return false;
        }
        void operation(){
            if(is_odd()){
                cout<<x<<" is odd\n";
            }
            else cout<<x<<" is not odd\n";
        }
};
class Prime: public Number{
    public:
        Prime(int y){
            x = y;
        }
       bool is_prime(){
            if (x == 0 || x == 1)
                return  false;
            
            for (int i = 2; i < x; i++)
                if (x % i == 0)  
                   return false;
            return true;        
       }  
       void operation(){
            if(is_prime()){
                cout<<x<<" is prime\n";
            }
            else cout<<x<<" is not prime\n";
        }
};

int main(){
    Number *number;
    int x;
    cout<<"Enter N: ";
    cin>>x;
    number = new Even(x);
    number->operation();
    number = new Odd(x);
    number->operation();
    
    number = new Prime(x);
    number->operation();    
    return 0;
}
