/*Write a program to input the following values in an array named volts:
11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, and 17.59. After the data has been
entered, have your program display the values.*/





#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
float volts[9]={11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

for(int i=0;i<9;i++)
   {
    cout<<setfill( ' ');
    cout<<"Voltage"<<setw(3)<<i+1<<setw(4) <<"is"<<setw(6)<<volts[i];cout<<endl;
   }
}