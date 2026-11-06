/*Write a program that determines which of a company’s four divisions (Northeast, 
Southeast, Northwest, and Southwest) had the greatest sales for a quarter. It should 
include the following two functions, which are called by  main . 
   •     double getSales()   is passed the name of a division. It asks the user for a division’s 
quarterly sales figure, validates the input, then returns it. It should be called once for 
each division.  
  •     void findHighest()   is passed the four sales totals. It determines which is the larg
est and prints the name of the high grossing division, along with its sales figure.   
  Input Validation: Do not accept dollar amounts less than $0.00. ageeee raff kore niba thikthakbhabe algorithm lekhba.flowchart lekhba. */



#include<iostream>
#include<string>
using namespace std;
double getSales(string );
    void findHighest(double ,double , double , double);
    int main()
    { 
       double Northeasteincome = getSales("northeaste");
   double Southeasteincome = getSales( "southeaste ");

    double Northwesteincome =getSales("northweste" );

      double Southwesteincome = getSales("southweste" );
     findHighest(Northeasteincome ,Southeasteincome ,Northwesteincome  ,Southwesteincome );return 0;
    }

    double getSales(string division)
{
    double sales;

    cout << "Enter quarterly sales for " << division << ": ";
    cin >> sales;

    while (sales < 0)
    {
        cout << "Invalid input. Enter again: ";
        cin >> sales;
    }

    return sales;
}





    
    void findHighest(double ne ,double se , double nw , double sw)
    { double max1 = (ne > se) ? ne : se;
double max2 = (nw > sw) ? nw : sw;
double maximum = (max1 > max2) ? max1 : max2;
if (maximum == ne)
        cout << "Northeast has the highest sales: $" << ne;
    else if (maximum == se)
        cout << "Southeast has the highest sales: $" << se;
    else if (maximum == nw)
        cout << "Northwest has the highest sales: $" << nw;
    else
        cout << "Southwest has the highest sales: $" << sw;






//যদি ১০টা number থাকে, তাহলে এভাবে pair করে pair করে maximum বের করতে পারো।
/*double max1 = (a > b) ? a : b;
double max2 = (c > d) ? c : d;
double max3 = (e > f) ? e : f;
double max4 = (g > h) ? g : h;
double max5 = (i > j) ? i : j;

double max6 = (max1 > max2) ? max1 : max2;
double max7 = (max3 > max4) ? max3 : max4;

double max8 = (max6 > max7) ? max6 : max7;

double maximum = (max8 > max5) ? max8 : max5;*/

    }
