#include<iostream>
class Distance
{
private:
int feet; // 0 to infinite
int inches; // 0 to 12
public:
// required constructors
Distance(){
feet = 0;
inches = 0;
}
Distance(int f, int i){
feet = f;
inches = i;
}
void operator=(Distance &D )//D1.operator=(D2);
{
feet = D.feet;//5
inches = D.inches;//11
}
// method to display distance
void displayDistance()
{
cout << "F: " << feet << " I:" << inches << endl;
}

};
int main()
{
Distance D1;//default //D1.feet=0 D1.inches=0
Distance D2(5, 11);//parameterized D2.feet=5 D2.inches=11

cout << "First Distance : ";
D1.displayDistance();
cout << "Second Distance :";
D2.displayDistance();

// use assignment operator
// D1 = D2;
D1.operator=(D2);
cout << "First Distance :";
D1.displayDistance();

getch();
}


