#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 void coinToss();
 int main(){
 
    srand(time(0));   // should be in main function.
int t;
cout<<"Enter how many tosses do you want:";
cin>>t;
for(int i=1;i<=t;i++){


  coinToss();
}

 }
 void coinToss()
{

 int rn=rand()%3;                //for 0-->1-->2
 if(rn==1) {
  cout<<"Heads"<<endl;
 }
else if(rn==2){
  cout<<"Tails"<<endl;
}
else{cout<<"UHHHH WRONGGGGG "<<endl;}

}