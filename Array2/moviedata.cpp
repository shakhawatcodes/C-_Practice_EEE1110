/*1.    Movie Data 
 Write a program that uses a structure named  MovieData  to store the following infor
mation about a movie: 
   Title  
  Director  
  Year Released  
  Running Time (in minutes)   
 The program should create two  MovieData  variables, store values in their members, 
and pass each one, in turn, to a function that displays the information about the movie 
in a clearly formatted manner. */
#include<iostream>
using namespace std;

struct Moviedata{//here the user definded datatype is movie data.
string title;
string Director;
int year_released;
float running_time;




};
int main()
{
Moviedata m1;
m1.title="Game of thrones";
cout<< "Movie title:"<<m1.title<<endl;
m1.Director="Stan lee";
cout<<"Movie director:"<<m1.Director<<endl;
m1.year_released=2030;
cout<<"Relesesd in:"<<m1.year_released<<endl;
m1.running_time=159.9;
cout<<"Running time in minutes:"<<m1.running_time<<endl;

cout<<endl;
cout<<"-------NEXT------"<<endl;
Moviedata m2;
m2.title="kill";
cout<< "Movie title:"<<m2.title<<endl;
m2.Director="anna";
cout<<"Movie director:"<<m2.Director<<endl;
m2.year_released=2023;
cout<<"Relesesd in:"<<m2.year_released<<endl;
m2.running_time=146.9;
cout<<"Running time in minutes:"<<m2.running_time<<endl;
}

