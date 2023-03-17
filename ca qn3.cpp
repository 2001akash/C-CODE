#include <iostream>
using namespace std;
int main() {
// your code goes here
int total = 10, sum = 20;
static int &another = sum;
another = ++sum = ++total = 200;
cout<<another<<" "<<sum<<" "<<total<<endl;
return 0;
}
