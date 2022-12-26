#include <iostream>
using namespace std;
main(){
string name;
float aprice;
float cprice;
float asold;
float csold;
float percentage;
float amount;
cout<<"Enter movie Name: ";
cin>> name;
cout<<"Enter adult ticket Price:";
cin>> aprice;
cout<<"Enter child ticket Price:";
cin>> cprice;
cout<<"Enter number of adult tickets sold:";
cin>> asold;
cout<<"Enter number of child tickets sold:";
cin>> csold;
cout<<"Enter percentage to donate:";
cin>> percentage;
 amount= (aprice*asold) + (cprice*csold) ;
 percentage = amount - (amount*percentage)/100;
cout<< "_____________________________________"<< endl;
cout<<"Total Amount Generated: "<< amount <<endl;
cout<<"Amount after Donation: "<<percentage <<endl;  

}



    
    

