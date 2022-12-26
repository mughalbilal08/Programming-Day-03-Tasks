#include <iostream>
using namespace std;
main(){
int digit;
int mod1;
int mod2;
int mod3;
int mod4;
int result;
cout << "Enter Four Digit Number: ";
cin>> digit;
mod1 = digit % 10;
digit = digit/10;
mod2 = digit % 10;
digit= digit/10;
mod3 = digit % 10;
digit= digit/10;
mod4 = digit % 10;

 result = mod1+mod2+mod3+mod4;
cout << "SUM is: " << result;
 
    


}