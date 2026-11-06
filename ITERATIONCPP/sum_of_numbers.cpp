/*    Sum of Numbers  
 Write a program that asks the user for a positive integer value. The program should use 
a loop to get the sum of all the integers from 1 up to the number entered. For example, 
if the user enters 50, the loop will find the sum of 1, 2, 3, 4, … 50. 
  Input Validation: Do not accept a negative starting number.*/


#include<iostream>
using namespace std;
int main(){

int n;

cout<<"Enter the number you want the sum up to:";
cin>>n;
while(n<1){cout<<" tui wrong disos, ,Enter the number again:";cin>>n;}

int sum=0;//loop er baire naile vejal.
for(int i=1;i<=n;i++ ){

sum=sum+i;



}


cout<<sum;








return 0;


}