/*Write a program to input eight integer numbers in an array named temp.As
each number is input, add the numbers to a total. After all numbers are input, display the
numbers and their average*/
#include<iostream>
using namespace std;
int main()
{
int total=0;
int temp[8];
for(int i=0;i<8;i++)
   {
    cout<<"Enter Integer "<<i+1 <<"here:";
    cin>>temp[i];
     total+=temp[i];//Vul kosrila only i jog korso.
   }cout<<endl;
   cout<<"The total value is  ="<<total<<endl;
for(int i=0;i<8;i++){

  cout<<"You entered"<<temp[i]<<endl;
}  int avg;
avg=total/8;
cout<<"AVeraGe:"<<avg;
}