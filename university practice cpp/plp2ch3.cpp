#include<iostream>
using namespace std;
int main(){
int m;
cout<<"Enter your marks:";
cin>>m;
if(m<40 && m>=0){
  cout<<"Better luck next time";
}
else if(m>=40 && m<=100){
  cout<<"alhamdulillah";
}
}