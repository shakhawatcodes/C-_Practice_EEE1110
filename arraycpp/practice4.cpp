/* a. Write a program to input 10 integer numbers in an array named
fmax and determine the maximum value entered. Your program should contain only one
loop, and the maximum should be determined as array element values are being input.
(Hint: Set the maximum equal to the first array element, which should be input before
the loop used to input the remaining array values.)

b. Repeat Exercise 8a, keeping track of both the maximum element in the array and the
index number for the maximum. After displaying the numbers, print these two mes
sages (replacing the underlines with the correct values):
The maximum value is: ___
This is element number ___ in the list of numbers
*/



#include <iostream>
using namespace std;

int main()
{
    int fmax[10];
    int maximum;int temp_elemntnumber;
     
    cout << "Enter Integer 1: ";//agei 1st element input
    cin >> fmax[0];

    maximum = fmax[0];

    for (int i = 1; i < 10; i++)
    {
        cout << "Enter Integer " << i + 1 << ": ";
        cin >> fmax[i];

        if (fmax[i] > maximum)
        {
            maximum = fmax[i];
            temp_elemntnumber=i+1; 
        }
    }
    
    cout << " the Maximum value is " << maximum << endl;
     cout<<" this is the Element number"<<temp_elemntnumber<<"in the list of numbers";
    return 0;
}