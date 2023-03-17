#include <iostream>
using namespace std;

int main()
{
    string str[3], temp;

    cout << "Enter 3 words: " << endl;
    for(int i = 0; i < 3; ++i)
    {
      getline(cin, str[i]);
    }

    // Use Bubble Sort to arrange words
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2 - i; ++j) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    cout << "In lexicographical order: " << endl;

    for(int i = 0; i < 3; ++i)
    {
       cout << str[i] << endl;
    }
    return 0;
}
