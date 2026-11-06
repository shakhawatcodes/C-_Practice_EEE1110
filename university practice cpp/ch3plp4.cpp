//Insane Ternary Operator problem.
#include<iostream>
using namespace std;
int main(){
int a,b,c,d,e;
cout<<"Enter your numbers:"<<endl;
cin >> a
    >> b
    >> c
    >> d
    >> e;

int min1 = (a < b) ? a : b;////Ternary operator ekta variable e rakhte hoy.
    int min2 = (min1 < c) ? min1 : c;
    int min3 = (min2 < d) ? min2 : d;
    int minimum = (min3 < e) ? min3 : e;


    cout<<"tong"<<minimum;









}