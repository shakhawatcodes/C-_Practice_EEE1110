/*  (Data Processing) Write an array declaration statement that stores the following values
in an array named volts: 16.24, 18.98, 23.75, 16.29, 19.54, 14.22, 11.13, and 15.39.
Include these statements in a program that displays the values in the array.*/





#include<iostream>
using namespace std;
int main ()
{
float volts[8]={16.24, 18.98, 23.75, 16.29, 19.54, 14.22, 11.13,  15.39};
for(int i=0;i<8;i++)
{

cout<<"voltage   no :"<<"   "<<i+1<<"  "<<"is"<<"    "<<volts[i]<<endl;


}








}