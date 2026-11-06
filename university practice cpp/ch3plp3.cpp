#include<iostream>
using namespace std;
/// Checking whether your entered year is a leap year or not.
int main(){

int y;
cout<<"Enter year::";
cin>>y;
if(y%4==0 && y%100!=0){

  cout<<"YES,Its a Leap year";
}
else if(y%400==0){
  cout<<"YES,Its a Leap year";
}
else{ 
  cout<<"Sorry, I have LOMBA dari,your entered year is not a leap year";
}
return 0;
}