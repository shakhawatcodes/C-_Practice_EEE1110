#include<iostream>
#include<string>
using namespace std;
int main()
{ string F;
  long double v;
  long double d;
int i;
for(i=1;i<=4;i++)
   {
cout<<"Enter fluid name="<<endl;
cin>>F;

cout<<"Enter viscosity="<<endl;
cin>>v;

cout<<"Enter density="<<endl;
cin>>d;


double kv=v/d;

cout<<"kv:"<<kv<<endl;







   }



}


