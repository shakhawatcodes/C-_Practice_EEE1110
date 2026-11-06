/* (Electrical Eng.) Write a program that specifies three one-dimensional arrays named cur
rent, resistance, and volts. Each array should be capable of holding 10 elements.

Using a for loop, input values for the current and resistance arrays. The entries in
the volts array should be the product of the corresponding values in the current and
resistance arrays (so volts[i] = current [i] * resistance[i]). After all the
data has been entered, display the following output, with the appropriate value under each
column heading:
Current    Resistance   Volts
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
float voltage[10];
float resistance[10];
float current[10];
int i;
for(i=0;i<10;i++)
  {
cout<<"Enter current in ampere "<<i+1<<":";
cin>> current[i];
cout<<endl;

cout<<"Enter resistance in ohm "<<i+1<<":";
cin>>resistance [i];
cout<<endl;
voltage[i]=current[i]*resistance [i];
  }

cout<<"==========Display========="<<endl;
cout<<"current(A)-----resistance(Ohm)-----voltage(V) "<<endl;

for(int j=0;j<10;j++)
{
  cout<<setfill(' ');
cout<<current[j]<<setw(8)<<"------"<<setw(10)<<resistance[j]<<setw(8)<<"---------"<<setw(9)<<voltage[j];
cout<<endl;
}








  



return 0;

}