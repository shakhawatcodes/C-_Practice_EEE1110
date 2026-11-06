/*    Characters for the ASCII Codes  
 Write a program that uses a loop to display the characters for the ASCII codes 0 
through 127. Display 16 characters on each line. */
#include <iostream>
using namespace std;

int main()
{
    int n;

    for(n = 0; n < 128; n++)
    {
        char ch = (char)n;
        cout << ch;
    }

    return 0;
}
