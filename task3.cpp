#include <iostream>
using namespace std;
main(){

float inivelocity;
float acceleration;
float time;
float finvelocity;

cout<< " Enter Initial Velocity: ";
cin >> inivelocity;
cout<< " Enter Acceleration: ";
cin >> acceleration; 
cout<< " Enter Time: ";
cin >> time;
finvelocity = (acceleration*time) + inivelocity ; 
cout<< " Final Velocity is: " << finvelocity ;

  
}