/*In physics, an object that is in motion is said to have kinetic energy. The following 
formula can be used to determine a moving object’s kinetic energy: 
KE  1 2 mv2   
The variables in the formula are as follows:  KE  is the kinetic energy,  m  is the object’s 
mass in kilograms, and  v  is the object’s velocity, in meters per second. 
Write a function named  kineticEnergy  that accepts an object’s mass (in kilograms) 
and velocity (in meters per second) as arguments. The function should return the 
amount of kinetic energy that the object has. Demonstrate the function by calling it in 
a program that asks the user to enter values for mass and velocity. */


#include<iostream>
#include<iomanip>
using namespace std;



  double kineticEnergy(float ,float );//function will return k.e in double.accept mass and velocity in float.

  
  int main()
  {float mass,velocity;

    cout<<"Enter mass of the object in kg:";
    cin>>mass;
    cout<<"Enter velocity of the object ms^-2:";
    cin>>velocity;

kineticEnergy(mass ,velocity );



  }

double kineticEnergy(float m ,float v )
{
  
  double ke;
  
  ke=0.5*m*(v*v);
  
  cout<<setfill(' ');
cout<<" so the objects Kinetic energy is ="<<setw(5)<<ke<<setw(7)<<"joule"<<endl;
return ke;
}
