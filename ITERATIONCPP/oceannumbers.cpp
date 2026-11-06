/*    Ocean Levels  
 Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write 
a program that displays a table showing the number of millimeters that the ocean will 
have risen each year for the next 25 years. */
#include<iostream>
using namespace std;
int main(){
int year;
float rising_result;cout<<"YEAR------>riisng result  "<<endl;
for(year=1;year<=25;year++){
  
rising_result=(year*1.5);
cout<<year<<"------>"<<rising_result<<endl
;
}


return 0;
}