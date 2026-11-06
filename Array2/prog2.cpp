/*3. (Data Processing) Write a program that uses an array declaration statement to initialize
the following numbers in an array named slopes: 17.24, 25.63, 5.94, 33.92, 3.71, 32.84,
35.93, 18.24, and 6.92. Your program should locate and display the maximum and mini
mum values in the array.
*/





#include<iostream>
using namespace std;
int main()
{
double slopes[9]={ 17.24, 25.63, 5.94, 33.92, 3.71, 32.84,
35.93, 18.24,  6.92};
double maximum=slopes[0];
for(int i=1;i<9;i++)
{
 if(slopes[i]>maximum)
  {
   maximum=slopes[i];


  }
}  cout<<"MAX:"<<maximum<<endl;
double minimum=slopes[0];
for(int i=1;i<9;i++)
{

if(slopes[i]<minimum)

 {
 minimum=slopes[i];


 }


}cout<<"Minimum"<<minimum<<endl;

cout<<"SLOPES ARE:";
for(int k=0;k<9;k++)
{


cout<<slopes[k]<<endl;

}





return 0;

}