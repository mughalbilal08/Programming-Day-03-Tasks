#include <iostream>
using namespace std;
main(){
int studentmarks1;
int studentmarks2;
int studentmarks3;
int totalmarks;
float average1;
float average2;
float average3;
float totalaverage;
 cout << "Enter First Student Marks: ";
 cin>> studentmarks1;
 cout << "Enter Second Student Marks: ";
 cin>> studentmarks2;
 cout << "Enter Third Student Marks: ";
 cin>> studentmarks3;
 cout << "Enter Total Marks of Subjects: ";
 cin >> totalmarks;
  average1 = (studentmarks1 * 100)/totalmarks;
  average2 = (studentmarks2 * 100)/totalmarks;
  average3 = (studentmarks3 * 100)/totalmarks; 
 totalaverage= (average1 + average2 + average3)/ 3;
 cout << "Class Average is: "<< totalaverage;
 
 
}