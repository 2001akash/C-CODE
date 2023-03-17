#include <iostream>
using namespace std;
int fun(int num) {
if(num % 2 == 0) {
return 0;
}
return num + fun(num / 2);
}
int main() {
// your code goes here
for(int i = 1; i <= 5; i++) {
cout<<fun(i)<<" ";
}
return 0;
}


