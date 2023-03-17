#include <iostream>
using namespace std;

int arm() {
    int num, originalNum, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 10;
        
        result += remainder * remainder * remainder;
        
        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
void prime()
		{
			int m=a;
			while(m!=0)
			{
				int x=m%10;
				if(x==4 || x==6 || x==8 || x==9)
				{
					prod=prod*x;
					
				}
				m=m/10;
			}
			cout<<"\nproduct of non prime :"<<prod;
		}
		void cube()
		{
			int m=a;
			while(m!=0)
			{
				
				int x=m%10;
				sum+=x*x*x;
				m=m/10;
			}
			cout<<"\nsum of cube of digits is "<<sum;
		}
		
};
int main()

{
	cout<<"\t\t program by amit giri";
	integer o;
	
	o.prime();
	o.arm();
	o.cube();
	getch();
}
