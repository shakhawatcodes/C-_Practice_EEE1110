#include<iostream>
using namespace std;
int main(){

int a;
cout<<"Enter your age:";
cin>>a;
if(a<18){
  cout<<"You are a child";
}
else if(a>=18 && a<=65){
  cout<<"You are an adult";
}
else if(a>65){
  cout<<"Yoa are a seniour citizen";
}
return 0;






}