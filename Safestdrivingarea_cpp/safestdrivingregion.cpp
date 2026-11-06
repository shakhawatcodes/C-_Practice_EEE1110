 /*Write a program that determines which of five geographic regions within a major city 
(north, south, east, west, and central) had the fewest reported automobile accidents last 
year. It should have the following two functions, which are called by  main . 
   •     int getNumAccidents()   is passed the name of a region. It asks the user for the 
number of automobile accidents reported in that region during the last year, vali
dates the input, then returns it. It should be called once for each city region.  
  •     void findLowest()   is passed the five accident totals. It determines which is the 
smallest and prints the name of the region, along with its accident figure.   
  Input Validation: Do not accept an accident number that is less than 0.*/ 



#include<iostream>
#include<string>
using namespace std;

    int getNumAccidents(string);//function protyping.
    void findLowest(int ,int ,int ,int ,int );
    int main()
    { cout<<"=====SAFEST AREA PREDICTION FOR DRIVING======="<<endl;
    int n,s,e,w,c;
            n= getNumAccidents("North" );//String parameter পাঠানোর সময় Quotes দিতে হবে
            s=getNumAccidents( "South");
            e=getNumAccidents( "East");
            w=getNumAccidents( "West");
            c=getNumAccidents( "Center");

            findLowest(n ,s,e,w,c );
            return 0;
    }
     int getNumAccidents(string area)
     {
       int na;
//input validation check....
do
{
    cout << "Enter the number of automobile accidents reported in "
         << area/*area kaje lagalam*/  << " region during the last year: ";
    cin >> na;

    if (na < 0)
        cout << "Invalid! Please enter a non-negative number.\n";

} while (na < 0);


return na;

     }

     void findLowest(int n1 ,int s1,int e1 ,int w1,int c1 )

     {
        int  min1=(n1<s1)?n1:s1;
        int min2=(e1<w1)?e1:w1;
        int min3=(min1<min2)?min1:min2;
        int lowest=(min3<c1)?min3:c1;

      if(lowest==n1){cout<<"The lowest accident occured in North,Accident number in north is:"<<n1<<"times";}

   else if(lowest==s1){cout<<"The lowest accident occured in South,Accident number in south is:"<<s1<<"times";}

   else if(lowest==e1){cout<<"The lowest accident occured in East,Accident number in East is:"<<e1<<"times";}

else if(lowest==w1){cout<<"The lowest accident occured in West,Accident number in West is:"<<w1<<"times";}

else if(lowest==c1){cout<<"The lowest accident occured in Center,Accident number in Center is:"<<c1<<"times"<<endl;}
 


cout<<"Birth and death is on Allahs hand, Say FI-AMANILLAH  and safe travels";
     }