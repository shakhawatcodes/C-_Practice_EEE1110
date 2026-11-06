/*    Your job is 
to complete the program. When it is complete, the program will ask the user to enter 
the width and length of a rectangle and then display the rectangle’s area. The program 
calls the following functions, which have not been written: 
   •     getLength   – This function should ask the user to enter the rectangle’s length and 
then return that value as a  double .  
  •     getWidth   – This function should ask the user to enter the rectangle’s width and then 
return that value as a  double .  
  •     getArea   – This function should accept the rectangle’s length and width as argu
ments and return the rectangle’s area. The area is calculated by multiplying the 
length by the width.  
  •     displayData   – This function should accept the rectangle’s length, width, and area 
as arguments and display them in an appropriate message on the screen. */






#include<iostream>
using namespace std;


double getLenght(double);
double getWidth(double);
double getArea(double ,double );
double displayData(double , double ,double );
int main()
{double le, wi, ar;//alada kore declare korte hbe taile main er l e muloto getarea and getresult e jabe.
cout<<"=====================Rectangle Area Determination======================"<<endl;
le=getLenght(0);//for avoiding garbage value and no work for perimeter.

wi=getWidth(0);//;;
ar= getArea( le ,wi );
displayData( le,  wi, ar );//le,wi,ar used for main function.eikhan theke value dukbe called function e

}
double getLenght(double l)
{
  cout<<"Enter the length of the rectangle:";
  cin>>l;
  return l;
}
double getWidth(double w){

cout<<"Enter the width of the rectangle:";

cin>>w;
return w;
}
double getArea(double l ,double w ){double a=l*w;
return l*w ;//return হওয়ার পরের লাইন কখনো execute হবে না।
}
double displayData(double l, double w,double a ){

cout<<"Length entered by you="<<l<<endl;
cout<<"Width entered by you="<<w<<endl;
cout<<"Area of the rectangle="<<a<<endl;
cout<<"WE LOVE you  SPIDERMAN,Dont miss the brand new day.TOM ,,,SHakhawat is a big fan of youuuuuuuuuuuuurs.";
}//function calling e datatype lagbe na,function prototype e only datatype lagbe variable lagbe na and function defining e 2 tai lagbe.