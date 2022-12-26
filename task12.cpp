#include <iostream>
using namespace std;
main(){
int date;
string month;
int year;
int result;
 cout << "Enter your Date of Birth: ";
 cin >> date;
 cout << "Enter your Month of Birth: ";
 cin >> month;
 cout << "Enter your Year of Birth: ";
 cin >> year;
 result = 2022 - year;
 cout << "Your age is: " << result;
}