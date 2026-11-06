#include<iostream>
using namespace std;

   float celsius(float );//accepts float=farenhitetemp,and returns float converted celcius;
   int main()
   {float faren;
    cout<<"Enter a temparature in degree farenhite:";
    cin>>faren;
    float clec=celsius(faren);

cout<<"Your entered temparature in celcius:"<<clec<<endl;


   }
   float celsius(float f){

      float result= (5.0/9.0)*(f-32);//float division ,not integer divison.
return result;


   }