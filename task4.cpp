#include <iostream>
using namespace std;
main(){

string name;
float sub1;
float sub2;
float sub3;
float sub4;
float sub5;
float percentage;
cout <<"Enter Your Name: ";
cin >> name;
cout <<"Enter Subject 01 Marks: ";
cin >> sub1;
cout <<"Enter Subject 02 Marks: ";
cin >> sub2;
cout <<"Enter Subject 03 Marks: ";
cin >> sub3;
cout <<"Enter Subject 04 Marks:";
cin >> sub4;
cout <<"Enter Subject 05 Marks:";
cin >> sub5;
percentage = ((sub1/500)*100)+((sub2/500)*100)+((sub3/500)*100)+((sub4/500)*100)+((sub5/500)*100);
cout << "Percentage: "<< percentage;

  
}