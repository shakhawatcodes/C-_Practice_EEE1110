/*Write a program to input the following integer numbers in an
array named grades: 89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82, and 73. As each
number is input, add the numbers to a total. After all numbers are input and the total is
obtained, calculate the average of the numbers, and use the average to determine the
deviation of each value from the average. Store each deviation in an array named
deviation. Each deviation is obtained as the element value less the average of all the
data. Have your program display each deviation with its corresponding element from the
grades array.
b. Calculate the variance of the data used in Exercise 9a. The variance is obtained by
squaring each deviation and dividing the sum of the squared deviations by the num
ber of deviations.*/








#include<iostream>

#include<iomanip>

using namespace std;

int main()

{
  int total=0;

int grade[14]={ 89,95,72,83,99,54,86,75,92,73,79,75,82,73};

for(int i=0;i<14;i++)

  {   total+=grade[i];
    
    
    
   
   
  }
float average;

average=(float)total/14;

float deviation;

float sum_of_devsq=0;

float variance;

cout<<"Total:"<<total<<endl;

cout<<"AVERAGE:"<<average<<endl;


for( int j=0;j<14;j++)
{
deviation=grade[j]-average;

float devsq=deviation*deviation;

sum_of_devsq+=devsq;

cout<<setfill(' ');

cout<<"Deviation for element"<<setw(4)<<j+1<<setw(4)

<<"is:"<<deviation<<endl;

}
variance=sum_of_devsq/14;

cout<<"Variance :"<<variance;


}