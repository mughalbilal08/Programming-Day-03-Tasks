#include <iostream>
using namespace std;
main(){
int digit;
int position1;
int position2;
int position3;
int position4;
int result;
cout << "Enter Four Digit Number: ";
cin>> digit;
position4 = digit % 10;
digit = digit/10;
position3 = digit % 10;
digit= digit/10;
position2 = digit % 10;
digit= digit/10;
position1 = digit % 10;
digit= digit/10;
result = (position1 + position3) + (position2 * position4); 
cout << "Answer is: " << result;
}