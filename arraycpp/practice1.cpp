/*1. (Practice) Write array declarations for the following:
a. A list of 100 double-precision voltages
b. A list of 50 double-precision temperatures
c. A list of 30 characters, each representing a code
d. A list of 100 integer years
e. A list of 32 double-precision velocities
f. A list of 1000 double-precision distances
g. A list of 6 integer code numbers*/
//a
#include <iostream>
using namespace std;
int main()
{

double voltage[100];
for(int i=0;i<100;i++)
   {
    cout<<"Enter Voltage for Resistance "<<i+1<<":";
     cin>> voltage[i];
   }


}
//b easy
//c
#include<iostream>
using namespace std;
int main()
{
string Char_for_code[30];
for(int i=0;i<30;i++)
   {
    cout<<"Enter The character :"<<i+1;
    cin>>Char_for_code[i];
   }
}
//This code cant be run.it was made just for my own practice.