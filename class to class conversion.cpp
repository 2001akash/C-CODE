#include<iostream>
using namespace std;
    class metre{   //DESTINATION
        int m;
        public:
        metre(){
           m=0 ;
        }
        metre(int m1 ){
            m=m1;
        }
        void show(){
            cout<<"value of metre: "<<m<<endl;
        }
    };
 
    class kilometre {            //source
        int km;
        public:
 
        kilometre(int km1){
            km=km1;
        }
 
        operator metre(){
            int m1=km*1000;
            return(metre(m1));
        }
        void show(){
            cout<<" VALUE OF KILOMTERE"<<km<<endl;
        }
 
 
    };
 
int main(){
    kilometre K1(5);
    K1.show();
    metre m1;
    m1=K1;
    m1.show();
 
    return 0;
}

